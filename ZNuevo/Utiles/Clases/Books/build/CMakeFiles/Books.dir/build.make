# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/usuario/Jutge/ZNuevo/Utiles/Clases/Books

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/usuario/Jutge/ZNuevo/Utiles/Clases/Books/build

# Include any dependencies generated for this target.
include CMakeFiles/Books.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Books.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Books.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Books.dir/flags.make

CMakeFiles/Books.dir/src/Books.cc.o: CMakeFiles/Books.dir/flags.make
CMakeFiles/Books.dir/src/Books.cc.o: ../src/Books.cc
CMakeFiles/Books.dir/src/Books.cc.o: CMakeFiles/Books.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/Jutge/ZNuevo/Utiles/Clases/Books/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Books.dir/src/Books.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Books.dir/src/Books.cc.o -MF CMakeFiles/Books.dir/src/Books.cc.o.d -o CMakeFiles/Books.dir/src/Books.cc.o -c /home/usuario/Jutge/ZNuevo/Utiles/Clases/Books/src/Books.cc

CMakeFiles/Books.dir/src/Books.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Books.dir/src/Books.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/Jutge/ZNuevo/Utiles/Clases/Books/src/Books.cc > CMakeFiles/Books.dir/src/Books.cc.i

CMakeFiles/Books.dir/src/Books.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Books.dir/src/Books.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/Jutge/ZNuevo/Utiles/Clases/Books/src/Books.cc -o CMakeFiles/Books.dir/src/Books.cc.s

CMakeFiles/Books.dir/src/Books_main.cc.o: CMakeFiles/Books.dir/flags.make
CMakeFiles/Books.dir/src/Books_main.cc.o: ../src/Books_main.cc
CMakeFiles/Books.dir/src/Books_main.cc.o: CMakeFiles/Books.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/Jutge/ZNuevo/Utiles/Clases/Books/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Books.dir/src/Books_main.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Books.dir/src/Books_main.cc.o -MF CMakeFiles/Books.dir/src/Books_main.cc.o.d -o CMakeFiles/Books.dir/src/Books_main.cc.o -c /home/usuario/Jutge/ZNuevo/Utiles/Clases/Books/src/Books_main.cc

CMakeFiles/Books.dir/src/Books_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Books.dir/src/Books_main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/Jutge/ZNuevo/Utiles/Clases/Books/src/Books_main.cc > CMakeFiles/Books.dir/src/Books_main.cc.i

CMakeFiles/Books.dir/src/Books_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Books.dir/src/Books_main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/Jutge/ZNuevo/Utiles/Clases/Books/src/Books_main.cc -o CMakeFiles/Books.dir/src/Books_main.cc.s

# Object files for target Books
Books_OBJECTS = \
"CMakeFiles/Books.dir/src/Books.cc.o" \
"CMakeFiles/Books.dir/src/Books_main.cc.o"

# External object files for target Books
Books_EXTERNAL_OBJECTS =

Books: CMakeFiles/Books.dir/src/Books.cc.o
Books: CMakeFiles/Books.dir/src/Books_main.cc.o
Books: CMakeFiles/Books.dir/build.make
Books: CMakeFiles/Books.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/usuario/Jutge/ZNuevo/Utiles/Clases/Books/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Books"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Books.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Books.dir/build: Books
.PHONY : CMakeFiles/Books.dir/build

CMakeFiles/Books.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Books.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Books.dir/clean

CMakeFiles/Books.dir/depend:
	cd /home/usuario/Jutge/ZNuevo/Utiles/Clases/Books/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/usuario/Jutge/ZNuevo/Utiles/Clases/Books /home/usuario/Jutge/ZNuevo/Utiles/Clases/Books /home/usuario/Jutge/ZNuevo/Utiles/Clases/Books/build /home/usuario/Jutge/ZNuevo/Utiles/Clases/Books/build /home/usuario/Jutge/ZNuevo/Utiles/Clases/Books/build/CMakeFiles/Books.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Books.dir/depend

