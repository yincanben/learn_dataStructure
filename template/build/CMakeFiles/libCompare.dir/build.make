# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.1

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.1.0/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.1.0/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ycb13/Desktop/study/dataStructure/template

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ycb13/Desktop/study/dataStructure/template/build

# Include any dependencies generated for this target.
include CMakeFiles/libCompare.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/libCompare.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/libCompare.dir/flags.make

CMakeFiles/libCompare.dir/max.cpp.o: CMakeFiles/libCompare.dir/flags.make
CMakeFiles/libCompare.dir/max.cpp.o: ../max.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/ycb13/Desktop/study/dataStructure/template/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/libCompare.dir/max.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/libCompare.dir/max.cpp.o -c /Users/ycb13/Desktop/study/dataStructure/template/max.cpp

CMakeFiles/libCompare.dir/max.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libCompare.dir/max.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/ycb13/Desktop/study/dataStructure/template/max.cpp > CMakeFiles/libCompare.dir/max.cpp.i

CMakeFiles/libCompare.dir/max.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libCompare.dir/max.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/ycb13/Desktop/study/dataStructure/template/max.cpp -o CMakeFiles/libCompare.dir/max.cpp.s

CMakeFiles/libCompare.dir/max.cpp.o.requires:
.PHONY : CMakeFiles/libCompare.dir/max.cpp.o.requires

CMakeFiles/libCompare.dir/max.cpp.o.provides: CMakeFiles/libCompare.dir/max.cpp.o.requires
	$(MAKE) -f CMakeFiles/libCompare.dir/build.make CMakeFiles/libCompare.dir/max.cpp.o.provides.build
.PHONY : CMakeFiles/libCompare.dir/max.cpp.o.provides

CMakeFiles/libCompare.dir/max.cpp.o.provides.build: CMakeFiles/libCompare.dir/max.cpp.o

# Object files for target libCompare
libCompare_OBJECTS = \
"CMakeFiles/libCompare.dir/max.cpp.o"

# External object files for target libCompare
libCompare_EXTERNAL_OBJECTS =

liblibCompare.a: CMakeFiles/libCompare.dir/max.cpp.o
liblibCompare.a: CMakeFiles/libCompare.dir/build.make
liblibCompare.a: CMakeFiles/libCompare.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library liblibCompare.a"
	$(CMAKE_COMMAND) -P CMakeFiles/libCompare.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libCompare.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/libCompare.dir/build: liblibCompare.a
.PHONY : CMakeFiles/libCompare.dir/build

CMakeFiles/libCompare.dir/requires: CMakeFiles/libCompare.dir/max.cpp.o.requires
.PHONY : CMakeFiles/libCompare.dir/requires

CMakeFiles/libCompare.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/libCompare.dir/cmake_clean.cmake
.PHONY : CMakeFiles/libCompare.dir/clean

CMakeFiles/libCompare.dir/depend:
	cd /Users/ycb13/Desktop/study/dataStructure/template/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ycb13/Desktop/study/dataStructure/template /Users/ycb13/Desktop/study/dataStructure/template /Users/ycb13/Desktop/study/dataStructure/template/build /Users/ycb13/Desktop/study/dataStructure/template/build /Users/ycb13/Desktop/study/dataStructure/template/build/CMakeFiles/libCompare.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/libCompare.dir/depend

