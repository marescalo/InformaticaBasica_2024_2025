# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/usuario/InformaticaBasica_2024_2025/pr11/ejercicios/ejercicio4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/usuario/InformaticaBasica_2024_2025/pr11/ejercicios/ejercicio4

# Include any dependencies generated for this target.
include CMakeFiles/dfa.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/dfa.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/dfa.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dfa.dir/flags.make

CMakeFiles/dfa.dir/src/dfa.cc.o: CMakeFiles/dfa.dir/flags.make
CMakeFiles/dfa.dir/src/dfa.cc.o: src/dfa.cc
CMakeFiles/dfa.dir/src/dfa.cc.o: CMakeFiles/dfa.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/usuario/InformaticaBasica_2024_2025/pr11/ejercicios/ejercicio4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dfa.dir/src/dfa.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/dfa.dir/src/dfa.cc.o -MF CMakeFiles/dfa.dir/src/dfa.cc.o.d -o CMakeFiles/dfa.dir/src/dfa.cc.o -c /home/usuario/InformaticaBasica_2024_2025/pr11/ejercicios/ejercicio4/src/dfa.cc

CMakeFiles/dfa.dir/src/dfa.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/dfa.dir/src/dfa.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/InformaticaBasica_2024_2025/pr11/ejercicios/ejercicio4/src/dfa.cc > CMakeFiles/dfa.dir/src/dfa.cc.i

CMakeFiles/dfa.dir/src/dfa.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/dfa.dir/src/dfa.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/InformaticaBasica_2024_2025/pr11/ejercicios/ejercicio4/src/dfa.cc -o CMakeFiles/dfa.dir/src/dfa.cc.s

CMakeFiles/dfa.dir/src/dfa-main.cc.o: CMakeFiles/dfa.dir/flags.make
CMakeFiles/dfa.dir/src/dfa-main.cc.o: src/dfa-main.cc
CMakeFiles/dfa.dir/src/dfa-main.cc.o: CMakeFiles/dfa.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/usuario/InformaticaBasica_2024_2025/pr11/ejercicios/ejercicio4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/dfa.dir/src/dfa-main.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/dfa.dir/src/dfa-main.cc.o -MF CMakeFiles/dfa.dir/src/dfa-main.cc.o.d -o CMakeFiles/dfa.dir/src/dfa-main.cc.o -c /home/usuario/InformaticaBasica_2024_2025/pr11/ejercicios/ejercicio4/src/dfa-main.cc

CMakeFiles/dfa.dir/src/dfa-main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/dfa.dir/src/dfa-main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/InformaticaBasica_2024_2025/pr11/ejercicios/ejercicio4/src/dfa-main.cc > CMakeFiles/dfa.dir/src/dfa-main.cc.i

CMakeFiles/dfa.dir/src/dfa-main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/dfa.dir/src/dfa-main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/InformaticaBasica_2024_2025/pr11/ejercicios/ejercicio4/src/dfa-main.cc -o CMakeFiles/dfa.dir/src/dfa-main.cc.s

# Object files for target dfa
dfa_OBJECTS = \
"CMakeFiles/dfa.dir/src/dfa.cc.o" \
"CMakeFiles/dfa.dir/src/dfa-main.cc.o"

# External object files for target dfa
dfa_EXTERNAL_OBJECTS =

build/dfa: CMakeFiles/dfa.dir/src/dfa.cc.o
build/dfa: CMakeFiles/dfa.dir/src/dfa-main.cc.o
build/dfa: CMakeFiles/dfa.dir/build.make
build/dfa: CMakeFiles/dfa.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/usuario/InformaticaBasica_2024_2025/pr11/ejercicios/ejercicio4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable build/dfa"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dfa.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dfa.dir/build: build/dfa
.PHONY : CMakeFiles/dfa.dir/build

CMakeFiles/dfa.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dfa.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dfa.dir/clean

CMakeFiles/dfa.dir/depend:
	cd /home/usuario/InformaticaBasica_2024_2025/pr11/ejercicios/ejercicio4 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/usuario/InformaticaBasica_2024_2025/pr11/ejercicios/ejercicio4 /home/usuario/InformaticaBasica_2024_2025/pr11/ejercicios/ejercicio4 /home/usuario/InformaticaBasica_2024_2025/pr11/ejercicios/ejercicio4 /home/usuario/InformaticaBasica_2024_2025/pr11/ejercicios/ejercicio4 /home/usuario/InformaticaBasica_2024_2025/pr11/ejercicios/ejercicio4/CMakeFiles/dfa.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/dfa.dir/depend

