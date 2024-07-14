cmake_minimum_required(VERSION 3.8)

# Set the project name and version
project(graphics VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)
link_libraries(glfw GL X11 pthread Xrandr Xi dl)

add_subdirectory(programs/basics)
