#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>

void framebuffer_size_callback(GLFWwindow *window, int width, int height);
void processInput(GLFWwindow *window);

// settings
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

const char *vertexShaderSource =
    "#version 330 core\n"
    "layout (location = 0) in vec3 aPos;\n"
    "void main()\n"
    "{\n"
    "   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
    "}\0";
const char *orangeFragmentShaderSource =
    "#version 330 core\n"
    "out vec4 FragColor;\n"
    "void main()\n"
    "{\n"
    "   FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
    "}\n\0";

const char *yellowFragmentShaderSource =
    "#version 330 core\n"
    "out vec4 FragColor;\n"
    "void main()\n"
    "{\n"
    "   FragColor = vec4(1.0f, 1.0f, 0.0f, 1.0f);\n"
    "}\n\0";

int main() {
    // glfw: initialize and configure
    // ------------------------------
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

    // glfw window creation
    // --------------------
    GLFWwindow *window =
        glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", NULL, NULL);
    if (window == NULL) {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    // glad: load all OpenGL function pointers
    // ---------------------------------------
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    // build and compile our shader program
    // ------------------------------------
    // vertex shader
    unsigned int vertexShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
    glCompileShader(vertexShader);
    // check for shader compile errors
    int success;
    char infoLog[512];
    glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
    if (!success) {
        glGetShaderInfoLog(vertexShader, 512, NULL, infoLog);
        std::cout << "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n"
                  << infoLog << std::endl;
    }
    // fragment shader
    unsigned int orangeFragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(orangeFragmentShader, 1, &orangeFragmentShaderSource, NULL);
    glCompileShader(orangeFragmentShader);
    // check for shader compile errors
    glGetShaderiv(orangeFragmentShader, GL_COMPILE_STATUS, &success);
    if (!success) {
        glGetShaderInfoLog(orangeFragmentShader, 512, NULL, infoLog);
        std::cout << "ERROR::SHADER::FRAGMENT::COMPILATION_FAILED\n"
                  << infoLog << std::endl;
    }
    unsigned int yellowFragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(yellowFragmentShader, 1, &yellowFragmentShaderSource, NULL);
    glCompileShader(yellowFragmentShader);
    // check for shader compile errors
    glGetShaderiv(yellowFragmentShader, GL_COMPILE_STATUS, &success);
    if (!success) {
        glGetShaderInfoLog(yellowFragmentShader, 512, NULL, infoLog);
        std::cout << "ERROR::SHADER::FRAGMENT::COMPILATION_FAILED\n"
                  << infoLog << std::endl;
    }
    // link shaders
    unsigned int orangeShaderProgram = glCreateProgram();
    glAttachShader(orangeShaderProgram, vertexShader);
    glAttachShader(orangeShaderProgram, orangeFragmentShader);
    glLinkProgram(orangeShaderProgram);
    // check for linking errors
    glGetProgramiv(orangeShaderProgram, GL_LINK_STATUS, &success);
    if (!success) {
        glGetProgramInfoLog(orangeShaderProgram, 512, NULL, infoLog);
        std::cout << "ERROR::SHADER::PROGRAM::LINKING_FAILED\n"
                  << infoLog << std::endl;
    }
    unsigned int yellowShaderProgram = glCreateProgram();
    glAttachShader(yellowShaderProgram, vertexShader);
    glAttachShader(yellowShaderProgram, yellowFragmentShader);
    glLinkProgram(yellowShaderProgram);
    // check for linking errors
    glGetProgramiv(yellowShaderProgram, GL_LINK_STATUS, &success);
    if (!success) {
        glGetProgramInfoLog(yellowShaderProgram, 512, NULL, infoLog);
        std::cout << "ERROR::SHADER::PROGRAM::LINKING_FAILED\n"
                  << infoLog << std::endl;
    }
    glDeleteShader(vertexShader);
    glDeleteShader(orangeFragmentShader);
    glDeleteShader(yellowFragmentShader);

    // set up vertex data (and buffer(s)) and configure vertex attributes
    // ------------------------------------------------------------------
    float vertices[] = {-0.5f,  0.0f, 0.0f,   // middle left
                        -0.25f, 0.5f, 0.0f,   // top left
                        0.0f,   0.0f, 0.0f,   // middle center
                        0.25f,  0.5f, 0.0f,   // top right
                        0.5f,   0.0f, 0.0f};  // middle right
    unsigned int indices[] = {
        // note that we start from 0!
        0, 1, 2,  // orange triangle
        2, 3, 4   // yellow triangle
    };
    unsigned int VBO, EBO, orangeVAO, yellowVAO;
    glGenBuffers(1, &EBO);
    glGenVertexArrays(1, &orangeVAO);
    glGenVertexArrays(1, &yellowVAO);
    glGenBuffers(1, &VBO);

    // orange triangle setup

    // bind the Vertex Array Object first, then bind and set vertex buffer(s),
    // and then configure vertex attributes(s).
    glBindVertexArray(orangeVAO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices,
                 GL_STATIC_DRAW);

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float),
                          (void *)0);
    glEnableVertexAttribArray(0);

    // yellow triangle setup

    glBindVertexArray(yellowVAO);
    // note that we can reuse the same VBO
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices,
                 GL_STATIC_DRAW);

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float),
                          (void *)0);
    glEnableVertexAttribArray(0);

    // glBindVertexArray(0); // not really necessary as well, but beware of
    // calls that could affect VAOs while this one is bound (like binding
    // element buffer objects, or enabling/disabling vertex attributes)

    // uncomment this call to draw in wireframe polygons.
    // glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

    // render loop
    // -----------
    while (!glfwWindowShouldClose(window)) {
        // input
        // -----
        processInput(window);

        // render
        // ------
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // draw our first triangle
        glUseProgram(orangeShaderProgram);
        glBindVertexArray(
            orangeVAO);  // seeing as we only have a single VAO there's
                         // no need to bind it every time, but we'll do
                         // so to keep things a bit more organized
        // glDrawArrays(GL_TRIANGLES, 0, 6);
        glDrawElements(GL_TRIANGLES, 3, GL_UNSIGNED_INT, 0);

        glUseProgram(yellowShaderProgram);
        glBindVertexArray(yellowVAO);
        // here we offset the indices by 3 so that we start at the 2nd triangle
        glDrawElements(GL_TRIANGLES, 3, GL_UNSIGNED_INT,
                       (void *)(3 * sizeof(unsigned int)));

        // glBindVertexArray(0); // no need to unbind it every time

        // glfw: swap buffers and poll IO events (keys pressed/released, mouse
        // moved etc.)
        // -------------------------------------------------------------------------------
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // optional: de-allocate all resources once they've outlived their purpose:
    // ------------------------------------------------------------------------
    glDeleteVertexArrays(1, &orangeVAO);
    glDeleteVertexArrays(1, &yellowVAO);
    glDeleteBuffers(1, &VBO);
    glDeleteBuffers(1, &EBO);
    glDeleteProgram(orangeShaderProgram);

    // glfw: terminate, clearing all previously allocated GLFW resources.
    // ------------------------------------------------------------------
    glfwTerminate();
    return 0;
}

// process all input: query GLFW whether relevant keys are pressed/released this
// frame and react accordingly
// ---------------------------------------------------------------------------------------------------------
void processInput(GLFWwindow *window) {
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}

// glfw: whenever the window size changed (by OS or user resize) this callback
// function executes
// ---------------------------------------------------------------------------------------------
void framebuffer_size_callback(GLFWwindow *window, int width, int height) {
    // make sure the viewport matches the new window dimensions; note that width
    // and height will be significantly larger than specified on retina
    // displays.
    glViewport(0, 0, width, height);
}
