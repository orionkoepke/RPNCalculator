# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.6

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\JetBrains\CLion 2016.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\JetBrains\CLion 2016.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\koepk\Desktop\RPNCalculator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\koepk\Desktop\RPNCalculator\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/RPNCalculator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RPNCalculator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RPNCalculator.dir/flags.make

CMakeFiles/RPNCalculator.dir/main.c.obj: CMakeFiles/RPNCalculator.dir/flags.make
CMakeFiles/RPNCalculator.dir/main.c.obj: CMakeFiles/RPNCalculator.dir/includes_C.rsp
CMakeFiles/RPNCalculator.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\koepk\Desktop\RPNCalculator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/RPNCalculator.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\RPNCalculator.dir\main.c.obj   -c C:\Users\koepk\Desktop\RPNCalculator\main.c

CMakeFiles/RPNCalculator.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/RPNCalculator.dir/main.c.i"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\koepk\Desktop\RPNCalculator\main.c > CMakeFiles\RPNCalculator.dir\main.c.i

CMakeFiles/RPNCalculator.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/RPNCalculator.dir/main.c.s"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\koepk\Desktop\RPNCalculator\main.c -o CMakeFiles\RPNCalculator.dir\main.c.s

CMakeFiles/RPNCalculator.dir/main.c.obj.requires:

.PHONY : CMakeFiles/RPNCalculator.dir/main.c.obj.requires

CMakeFiles/RPNCalculator.dir/main.c.obj.provides: CMakeFiles/RPNCalculator.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\RPNCalculator.dir\build.make CMakeFiles/RPNCalculator.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/RPNCalculator.dir/main.c.obj.provides

CMakeFiles/RPNCalculator.dir/main.c.obj.provides.build: CMakeFiles/RPNCalculator.dir/main.c.obj


CMakeFiles/RPNCalculator.dir/Stack.c.obj: CMakeFiles/RPNCalculator.dir/flags.make
CMakeFiles/RPNCalculator.dir/Stack.c.obj: CMakeFiles/RPNCalculator.dir/includes_C.rsp
CMakeFiles/RPNCalculator.dir/Stack.c.obj: ../Stack.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\koepk\Desktop\RPNCalculator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/RPNCalculator.dir/Stack.c.obj"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\RPNCalculator.dir\Stack.c.obj   -c C:\Users\koepk\Desktop\RPNCalculator\Stack.c

CMakeFiles/RPNCalculator.dir/Stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/RPNCalculator.dir/Stack.c.i"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\koepk\Desktop\RPNCalculator\Stack.c > CMakeFiles\RPNCalculator.dir\Stack.c.i

CMakeFiles/RPNCalculator.dir/Stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/RPNCalculator.dir/Stack.c.s"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\koepk\Desktop\RPNCalculator\Stack.c -o CMakeFiles\RPNCalculator.dir\Stack.c.s

CMakeFiles/RPNCalculator.dir/Stack.c.obj.requires:

.PHONY : CMakeFiles/RPNCalculator.dir/Stack.c.obj.requires

CMakeFiles/RPNCalculator.dir/Stack.c.obj.provides: CMakeFiles/RPNCalculator.dir/Stack.c.obj.requires
	$(MAKE) -f CMakeFiles\RPNCalculator.dir\build.make CMakeFiles/RPNCalculator.dir/Stack.c.obj.provides.build
.PHONY : CMakeFiles/RPNCalculator.dir/Stack.c.obj.provides

CMakeFiles/RPNCalculator.dir/Stack.c.obj.provides.build: CMakeFiles/RPNCalculator.dir/Stack.c.obj


CMakeFiles/RPNCalculator.dir/Solver.c.obj: CMakeFiles/RPNCalculator.dir/flags.make
CMakeFiles/RPNCalculator.dir/Solver.c.obj: CMakeFiles/RPNCalculator.dir/includes_C.rsp
CMakeFiles/RPNCalculator.dir/Solver.c.obj: ../Solver.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\koepk\Desktop\RPNCalculator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/RPNCalculator.dir/Solver.c.obj"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\RPNCalculator.dir\Solver.c.obj   -c C:\Users\koepk\Desktop\RPNCalculator\Solver.c

CMakeFiles/RPNCalculator.dir/Solver.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/RPNCalculator.dir/Solver.c.i"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\koepk\Desktop\RPNCalculator\Solver.c > CMakeFiles\RPNCalculator.dir\Solver.c.i

CMakeFiles/RPNCalculator.dir/Solver.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/RPNCalculator.dir/Solver.c.s"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\koepk\Desktop\RPNCalculator\Solver.c -o CMakeFiles\RPNCalculator.dir\Solver.c.s

CMakeFiles/RPNCalculator.dir/Solver.c.obj.requires:

.PHONY : CMakeFiles/RPNCalculator.dir/Solver.c.obj.requires

CMakeFiles/RPNCalculator.dir/Solver.c.obj.provides: CMakeFiles/RPNCalculator.dir/Solver.c.obj.requires
	$(MAKE) -f CMakeFiles\RPNCalculator.dir\build.make CMakeFiles/RPNCalculator.dir/Solver.c.obj.provides.build
.PHONY : CMakeFiles/RPNCalculator.dir/Solver.c.obj.provides

CMakeFiles/RPNCalculator.dir/Solver.c.obj.provides.build: CMakeFiles/RPNCalculator.dir/Solver.c.obj


# Object files for target RPNCalculator
RPNCalculator_OBJECTS = \
"CMakeFiles/RPNCalculator.dir/main.c.obj" \
"CMakeFiles/RPNCalculator.dir/Stack.c.obj" \
"CMakeFiles/RPNCalculator.dir/Solver.c.obj"

# External object files for target RPNCalculator
RPNCalculator_EXTERNAL_OBJECTS =

RPNCalculator.exe: CMakeFiles/RPNCalculator.dir/main.c.obj
RPNCalculator.exe: CMakeFiles/RPNCalculator.dir/Stack.c.obj
RPNCalculator.exe: CMakeFiles/RPNCalculator.dir/Solver.c.obj
RPNCalculator.exe: CMakeFiles/RPNCalculator.dir/build.make
RPNCalculator.exe: CMakeFiles/RPNCalculator.dir/linklibs.rsp
RPNCalculator.exe: CMakeFiles/RPNCalculator.dir/objects1.rsp
RPNCalculator.exe: CMakeFiles/RPNCalculator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\koepk\Desktop\RPNCalculator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable RPNCalculator.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\RPNCalculator.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RPNCalculator.dir/build: RPNCalculator.exe

.PHONY : CMakeFiles/RPNCalculator.dir/build

CMakeFiles/RPNCalculator.dir/requires: CMakeFiles/RPNCalculator.dir/main.c.obj.requires
CMakeFiles/RPNCalculator.dir/requires: CMakeFiles/RPNCalculator.dir/Stack.c.obj.requires
CMakeFiles/RPNCalculator.dir/requires: CMakeFiles/RPNCalculator.dir/Solver.c.obj.requires

.PHONY : CMakeFiles/RPNCalculator.dir/requires

CMakeFiles/RPNCalculator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\RPNCalculator.dir\cmake_clean.cmake
.PHONY : CMakeFiles/RPNCalculator.dir/clean

CMakeFiles/RPNCalculator.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\koepk\Desktop\RPNCalculator C:\Users\koepk\Desktop\RPNCalculator C:\Users\koepk\Desktop\RPNCalculator\cmake-build-debug C:\Users\koepk\Desktop\RPNCalculator\cmake-build-debug C:\Users\koepk\Desktop\RPNCalculator\cmake-build-debug\CMakeFiles\RPNCalculator.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RPNCalculator.dir/depend
