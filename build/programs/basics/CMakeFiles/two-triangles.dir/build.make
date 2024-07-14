# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/palad1nz0/.local/lib/python3.8/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/palad1nz0/.local/lib/python3.8/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/palad1nz0/programming/opengl

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/palad1nz0/programming/opengl/build

# Include any dependencies generated for this target.
include programs/basics/CMakeFiles/two-triangles.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include programs/basics/CMakeFiles/two-triangles.dir/compiler_depend.make

# Include the progress variables for this target.
include programs/basics/CMakeFiles/two-triangles.dir/progress.make

# Include the compile flags for this target's objects.
include programs/basics/CMakeFiles/two-triangles.dir/flags.make

programs/basics/CMakeFiles/two-triangles.dir/__/__/src/glad.c.o: programs/basics/CMakeFiles/two-triangles.dir/flags.make
programs/basics/CMakeFiles/two-triangles.dir/__/__/src/glad.c.o: /home/palad1nz0/programming/opengl/src/glad.c
programs/basics/CMakeFiles/two-triangles.dir/__/__/src/glad.c.o: programs/basics/CMakeFiles/two-triangles.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/palad1nz0/programming/opengl/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object programs/basics/CMakeFiles/two-triangles.dir/__/__/src/glad.c.o"
	cd /home/palad1nz0/programming/opengl/build/programs/basics && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT programs/basics/CMakeFiles/two-triangles.dir/__/__/src/glad.c.o -MF CMakeFiles/two-triangles.dir/__/__/src/glad.c.o.d -o CMakeFiles/two-triangles.dir/__/__/src/glad.c.o -c /home/palad1nz0/programming/opengl/src/glad.c

programs/basics/CMakeFiles/two-triangles.dir/__/__/src/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/two-triangles.dir/__/__/src/glad.c.i"
	cd /home/palad1nz0/programming/opengl/build/programs/basics && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/palad1nz0/programming/opengl/src/glad.c > CMakeFiles/two-triangles.dir/__/__/src/glad.c.i

programs/basics/CMakeFiles/two-triangles.dir/__/__/src/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/two-triangles.dir/__/__/src/glad.c.s"
	cd /home/palad1nz0/programming/opengl/build/programs/basics && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/palad1nz0/programming/opengl/src/glad.c -o CMakeFiles/two-triangles.dir/__/__/src/glad.c.s

programs/basics/CMakeFiles/two-triangles.dir/triangle/two.cpp.o: programs/basics/CMakeFiles/two-triangles.dir/flags.make
programs/basics/CMakeFiles/two-triangles.dir/triangle/two.cpp.o: /home/palad1nz0/programming/opengl/programs/basics/triangle/two.cpp
programs/basics/CMakeFiles/two-triangles.dir/triangle/two.cpp.o: programs/basics/CMakeFiles/two-triangles.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/palad1nz0/programming/opengl/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object programs/basics/CMakeFiles/two-triangles.dir/triangle/two.cpp.o"
	cd /home/palad1nz0/programming/opengl/build/programs/basics && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT programs/basics/CMakeFiles/two-triangles.dir/triangle/two.cpp.o -MF CMakeFiles/two-triangles.dir/triangle/two.cpp.o.d -o CMakeFiles/two-triangles.dir/triangle/two.cpp.o -c /home/palad1nz0/programming/opengl/programs/basics/triangle/two.cpp

programs/basics/CMakeFiles/two-triangles.dir/triangle/two.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/two-triangles.dir/triangle/two.cpp.i"
	cd /home/palad1nz0/programming/opengl/build/programs/basics && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/palad1nz0/programming/opengl/programs/basics/triangle/two.cpp > CMakeFiles/two-triangles.dir/triangle/two.cpp.i

programs/basics/CMakeFiles/two-triangles.dir/triangle/two.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/two-triangles.dir/triangle/two.cpp.s"
	cd /home/palad1nz0/programming/opengl/build/programs/basics && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/palad1nz0/programming/opengl/programs/basics/triangle/two.cpp -o CMakeFiles/two-triangles.dir/triangle/two.cpp.s

# Object files for target two-triangles
two__triangles_OBJECTS = \
"CMakeFiles/two-triangles.dir/__/__/src/glad.c.o" \
"CMakeFiles/two-triangles.dir/triangle/two.cpp.o"

# External object files for target two-triangles
two__triangles_EXTERNAL_OBJECTS =

programs/basics/two-triangles: programs/basics/CMakeFiles/two-triangles.dir/__/__/src/glad.c.o
programs/basics/two-triangles: programs/basics/CMakeFiles/two-triangles.dir/triangle/two.cpp.o
programs/basics/two-triangles: programs/basics/CMakeFiles/two-triangles.dir/build.make
programs/basics/two-triangles: programs/basics/CMakeFiles/two-triangles.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/palad1nz0/programming/opengl/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable two-triangles"
	cd /home/palad1nz0/programming/opengl/build/programs/basics && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/two-triangles.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
programs/basics/CMakeFiles/two-triangles.dir/build: programs/basics/two-triangles
.PHONY : programs/basics/CMakeFiles/two-triangles.dir/build

programs/basics/CMakeFiles/two-triangles.dir/clean:
	cd /home/palad1nz0/programming/opengl/build/programs/basics && $(CMAKE_COMMAND) -P CMakeFiles/two-triangles.dir/cmake_clean.cmake
.PHONY : programs/basics/CMakeFiles/two-triangles.dir/clean

programs/basics/CMakeFiles/two-triangles.dir/depend:
	cd /home/palad1nz0/programming/opengl/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/palad1nz0/programming/opengl /home/palad1nz0/programming/opengl/programs/basics /home/palad1nz0/programming/opengl/build /home/palad1nz0/programming/opengl/build/programs/basics /home/palad1nz0/programming/opengl/build/programs/basics/CMakeFiles/two-triangles.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : programs/basics/CMakeFiles/two-triangles.dir/depend

