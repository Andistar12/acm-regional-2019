# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /opt/clion-2019.2.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2019.2.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nw17/contest/A

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nw17/contest/A/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/A.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/A.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/A.dir/flags.make

CMakeFiles/A.dir/A.cpp.o: CMakeFiles/A.dir/flags.make
CMakeFiles/A.dir/A.cpp.o: ../A.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nw17/contest/A/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/A.dir/A.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/A.dir/A.cpp.o -c /home/nw17/contest/A/A.cpp

CMakeFiles/A.dir/A.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A.dir/A.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nw17/contest/A/A.cpp > CMakeFiles/A.dir/A.cpp.i

CMakeFiles/A.dir/A.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A.dir/A.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nw17/contest/A/A.cpp -o CMakeFiles/A.dir/A.cpp.s

# Object files for target A
A_OBJECTS = \
"CMakeFiles/A.dir/A.cpp.o"

# External object files for target A
A_EXTERNAL_OBJECTS =

A : CMakeFiles/A.dir/A.cpp.o
A : CMakeFiles/A.dir/build.make
A : CMakeFiles/A.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nw17/contest/A/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable A"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/A.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/A.dir/build: A

.PHONY : CMakeFiles/A.dir/build

CMakeFiles/A.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/A.dir/cmake_clean.cmake
.PHONY : CMakeFiles/A.dir/clean

CMakeFiles/A.dir/depend:
	cd /home/nw17/contest/A/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nw17/contest/A /home/nw17/contest/A /home/nw17/contest/A/cmake-build-debug /home/nw17/contest/A/cmake-build-debug /home/nw17/contest/A/cmake-build-debug/CMakeFiles/A.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/A.dir/depend

