# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\3305-Data-Structures\Assignment2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\3305-Data-Structures\Assignment2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Assignment2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Assignment2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Assignment2.dir/flags.make

CMakeFiles/Assignment2.dir/main.cpp.obj: CMakeFiles/Assignment2.dir/flags.make
CMakeFiles/Assignment2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\3305-Data-Structures\Assignment2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Assignment2.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Assignment2.dir\main.cpp.obj -c C:\3305-Data-Structures\Assignment2\main.cpp

CMakeFiles/Assignment2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment2.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\3305-Data-Structures\Assignment2\main.cpp > CMakeFiles\Assignment2.dir\main.cpp.i

CMakeFiles/Assignment2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment2.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\3305-Data-Structures\Assignment2\main.cpp -o CMakeFiles\Assignment2.dir\main.cpp.s

CMakeFiles/Assignment2.dir/rationalImp.cpp.obj: CMakeFiles/Assignment2.dir/flags.make
CMakeFiles/Assignment2.dir/rationalImp.cpp.obj: ../rationalImp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\3305-Data-Structures\Assignment2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Assignment2.dir/rationalImp.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Assignment2.dir\rationalImp.cpp.obj -c C:\3305-Data-Structures\Assignment2\rationalImp.cpp

CMakeFiles/Assignment2.dir/rationalImp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment2.dir/rationalImp.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\3305-Data-Structures\Assignment2\rationalImp.cpp > CMakeFiles\Assignment2.dir\rationalImp.cpp.i

CMakeFiles/Assignment2.dir/rationalImp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment2.dir/rationalImp.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\3305-Data-Structures\Assignment2\rationalImp.cpp -o CMakeFiles\Assignment2.dir\rationalImp.cpp.s

# Object files for target Assignment2
Assignment2_OBJECTS = \
"CMakeFiles/Assignment2.dir/main.cpp.obj" \
"CMakeFiles/Assignment2.dir/rationalImp.cpp.obj"

# External object files for target Assignment2
Assignment2_EXTERNAL_OBJECTS =

Assignment2.exe: CMakeFiles/Assignment2.dir/main.cpp.obj
Assignment2.exe: CMakeFiles/Assignment2.dir/rationalImp.cpp.obj
Assignment2.exe: CMakeFiles/Assignment2.dir/build.make
Assignment2.exe: CMakeFiles/Assignment2.dir/linklibs.rsp
Assignment2.exe: CMakeFiles/Assignment2.dir/objects1.rsp
Assignment2.exe: CMakeFiles/Assignment2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\3305-Data-Structures\Assignment2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Assignment2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Assignment2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Assignment2.dir/build: Assignment2.exe

.PHONY : CMakeFiles/Assignment2.dir/build

CMakeFiles/Assignment2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Assignment2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Assignment2.dir/clean

CMakeFiles/Assignment2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\3305-Data-Structures\Assignment2 C:\3305-Data-Structures\Assignment2 C:\3305-Data-Structures\Assignment2\cmake-build-debug C:\3305-Data-Structures\Assignment2\cmake-build-debug C:\3305-Data-Structures\Assignment2\cmake-build-debug\CMakeFiles\Assignment2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Assignment2.dir/depend
