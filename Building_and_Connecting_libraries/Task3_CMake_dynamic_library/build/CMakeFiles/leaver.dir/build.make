# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ekaterina/Desktop/origin/Building_and_Connecting_libraries/Task3_CMake_dynamic_library

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ekaterina/Desktop/origin/Building_and_Connecting_libraries/Task3_CMake_dynamic_library/build

# Include any dependencies generated for this target.
include CMakeFiles/leaver.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/leaver.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/leaver.dir/flags.make

CMakeFiles/leaver.dir/leaver.cpp.o: CMakeFiles/leaver.dir/flags.make
CMakeFiles/leaver.dir/leaver.cpp.o: ../leaver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ekaterina/Desktop/origin/Building_and_Connecting_libraries/Task3_CMake_dynamic_library/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/leaver.dir/leaver.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/leaver.dir/leaver.cpp.o -c /home/ekaterina/Desktop/origin/Building_and_Connecting_libraries/Task3_CMake_dynamic_library/leaver.cpp

CMakeFiles/leaver.dir/leaver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/leaver.dir/leaver.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ekaterina/Desktop/origin/Building_and_Connecting_libraries/Task3_CMake_dynamic_library/leaver.cpp > CMakeFiles/leaver.dir/leaver.cpp.i

CMakeFiles/leaver.dir/leaver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/leaver.dir/leaver.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ekaterina/Desktop/origin/Building_and_Connecting_libraries/Task3_CMake_dynamic_library/leaver.cpp -o CMakeFiles/leaver.dir/leaver.cpp.s

# Object files for target leaver
leaver_OBJECTS = \
"CMakeFiles/leaver.dir/leaver.cpp.o"

# External object files for target leaver
leaver_EXTERNAL_OBJECTS =

libleaver.so: CMakeFiles/leaver.dir/leaver.cpp.o
libleaver.so: CMakeFiles/leaver.dir/build.make
libleaver.so: CMakeFiles/leaver.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ekaterina/Desktop/origin/Building_and_Connecting_libraries/Task3_CMake_dynamic_library/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libleaver.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/leaver.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/leaver.dir/build: libleaver.so

.PHONY : CMakeFiles/leaver.dir/build

CMakeFiles/leaver.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/leaver.dir/cmake_clean.cmake
.PHONY : CMakeFiles/leaver.dir/clean

CMakeFiles/leaver.dir/depend:
	cd /home/ekaterina/Desktop/origin/Building_and_Connecting_libraries/Task3_CMake_dynamic_library/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ekaterina/Desktop/origin/Building_and_Connecting_libraries/Task3_CMake_dynamic_library /home/ekaterina/Desktop/origin/Building_and_Connecting_libraries/Task3_CMake_dynamic_library /home/ekaterina/Desktop/origin/Building_and_Connecting_libraries/Task3_CMake_dynamic_library/build /home/ekaterina/Desktop/origin/Building_and_Connecting_libraries/Task3_CMake_dynamic_library/build /home/ekaterina/Desktop/origin/Building_and_Connecting_libraries/Task3_CMake_dynamic_library/build/CMakeFiles/leaver.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/leaver.dir/depend

