# geometry
add_executable(one-triangle ${CMAKE_SOURCE_DIR}/src/glad.c triangle/one.cpp)
add_executable(two-triangles ${CMAKE_SOURCE_DIR}/src/glad.c triangle/two.cpp)
add_executable(two-triangles-color ${CMAKE_SOURCE_DIR}/src/glad.c triangle/two-color.cpp)
add_executable(rectangle ${CMAKE_SOURCE_DIR}/src/glad.c rectangle/main.cpp)

# shaders
add_executable(shaders-uniform ${CMAKE_SOURCE_DIR}/src/glad.c shaders/uniform.cpp)
add_executable(shaders-mixed ${CMAKE_SOURCE_DIR}/src/glad.c shaders/mixed.cpp)

# textures
add_executable(textures-container ${CMAKE_SOURCE_DIR}/src/glad.c textures/container.cpp)
add_executable(textures-mixed ${CMAKE_SOURCE_DIR}/src/glad.c textures/mixed.cpp)
add_executable(textures-mixed-exercise ${CMAKE_SOURCE_DIR}/src/glad.c textures/mixed-exercise.cpp)

