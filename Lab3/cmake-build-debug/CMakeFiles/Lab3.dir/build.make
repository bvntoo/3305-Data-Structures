# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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
CMAKE_SOURCE_DIR = C:\3305-Data-Structures\Lab3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\3305-Data-Structures\Lab3\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lab3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab3.dir/flags.make

CMakeFiles/Lab3.dir/statsexamp2.cpp.obj: CMakeFiles/Lab3.dir/flags.make
CMakeFiles/Lab3.dir/statsexamp2.cpp.obj: ../statsexamp2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\3305-Data-Structures\Lab3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab3.dir/statsexamp2.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Lab3.dir\statsexamp2.cpp.obj -c C:\3305-Data-Structures\Lab3\statsexamp2.cpp

CMakeFiles/Lab3.dir/statsexamp2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab3.dir/statsexamp2.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\3305-Data-Structures\Lab3\statsexamp2.cpp > CMakeFiles\Lab3.dir\statsexamp2.cpp.i

CMakeFiles/Lab3.dir/statsexamp2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab3.dir/statsexamp2.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\3305-Data-Structures\Lab3\statsexamp2.cpp -o CMakeFiles\Lab3.dir\statsexamp2.cpp.s

CMakeFiles/Lab3.dir/statsImp.cpp.obj: CMakeFiles/Lab3.dir/flags.make
CMakeFiles/Lab3.dir/statsImp.cpp.obj: ../statsImp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\3305-Data-Structures\Lab3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Lab3.dir/statsImp.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Lab3.dir\statsImp.cpp.obj -c C:\3305-Data-Structures\Lab3\statsImp.cpp

CMakeFiles/Lab3.dir/statsImp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab3.dir/statsImp.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\3305-Data-Structures\Lab3\statsImp.cpp > CMakeFiles\Lab3.dir\statsImp.cpp.i

CMakeFiles/Lab3.dir/statsImp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab3.dir/statsImp.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\3305-Data-Structures\Lab3\statsImp.cpp -o CMakeFiles\Lab3.dir\statsImp.cpp.s

# Object files for target Lab3
Lab3_OBJECTS = \
"CMakeFiles/Lab3.dir/statsexamp2.cpp.obj" \
"CMakeFiles/Lab3.dir/statsImp.cpp.obj"

# External object files for target Lab3
Lab3_EXTERNAL_OBJECTS =

Lab3.exe: CMakeFiles/Lab3.dir/statsexamp2.cpp.obj
Lab3.exe: CMakeFiles/Lab3.dir/statsImp.cpp.obj
Lab3.exe: CMakeFiles/Lab3.dir/build.make
Lab3.exe: CMakeFiles/Lab3.dir/linklibs.rsp
Lab3.exe: CMakeFiles/Lab3.dir/objects1.rsp
Lab3.exe: CMakeFiles/Lab3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\3305-Data-Structures\Lab3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Lab3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Lab3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab3.dir/build: Lab3.exe

.PHONY : CMakeFiles/Lab3.dir/build

CMakeFiles/Lab3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Lab3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Lab3.dir/clean

CMakeFiles/Lab3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\3305-Data-Structures\Lab3 C:\3305-Data-Structures\Lab3 C:\3305-Data-Structures\Lab3\cmake-build-debug C:\3305-Data-Structures\Lab3\cmake-build-debug C:\3305-Data-Structures\Lab3\cmake-build-debug\CMakeFiles\Lab3.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab3.dir/depend

