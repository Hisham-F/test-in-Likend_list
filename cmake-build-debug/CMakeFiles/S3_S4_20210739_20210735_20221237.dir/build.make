# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2023.2.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2023.2.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\c++ Codes\S3,S4_20210739_20210735_20221237"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\c++ Codes\S3,S4_20210739_20210735_20221237\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/S3_S4_20210739_20210735_20221237.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/S3_S4_20210739_20210735_20221237.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/S3_S4_20210739_20210735_20221237.dir/flags.make

CMakeFiles/S3_S4_20210739_20210735_20221237.dir/main.cpp.obj: CMakeFiles/S3_S4_20210739_20210735_20221237.dir/flags.make
CMakeFiles/S3_S4_20210739_20210735_20221237.dir/main.cpp.obj: D:/c++\ Codes/S3,S4_20210739_20210735_20221237/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\c++ Codes\S3,S4_20210739_20210735_20221237\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/S3_S4_20210739_20210735_20221237.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\S3_S4_20210739_20210735_20221237.dir\main.cpp.obj -c "D:\c++ Codes\S3,S4_20210739_20210735_20221237\main.cpp"

CMakeFiles/S3_S4_20210739_20210735_20221237.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/S3_S4_20210739_20210735_20221237.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\c++ Codes\S3,S4_20210739_20210735_20221237\main.cpp" > CMakeFiles\S3_S4_20210739_20210735_20221237.dir\main.cpp.i

CMakeFiles/S3_S4_20210739_20210735_20221237.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/S3_S4_20210739_20210735_20221237.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\c++ Codes\S3,S4_20210739_20210735_20221237\main.cpp" -o CMakeFiles\S3_S4_20210739_20210735_20221237.dir\main.cpp.s

# Object files for target S3_S4_20210739_20210735_20221237
S3_S4_20210739_20210735_20221237_OBJECTS = \
"CMakeFiles/S3_S4_20210739_20210735_20221237.dir/main.cpp.obj"

# External object files for target S3_S4_20210739_20210735_20221237
S3_S4_20210739_20210735_20221237_EXTERNAL_OBJECTS =

S3_S4_20210739_20210735_20221237.exe: CMakeFiles/S3_S4_20210739_20210735_20221237.dir/main.cpp.obj
S3_S4_20210739_20210735_20221237.exe: CMakeFiles/S3_S4_20210739_20210735_20221237.dir/build.make
S3_S4_20210739_20210735_20221237.exe: CMakeFiles/S3_S4_20210739_20210735_20221237.dir/linkLibs.rsp
S3_S4_20210739_20210735_20221237.exe: CMakeFiles/S3_S4_20210739_20210735_20221237.dir/objects1.rsp
S3_S4_20210739_20210735_20221237.exe: CMakeFiles/S3_S4_20210739_20210735_20221237.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\c++ Codes\S3,S4_20210739_20210735_20221237\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable S3_S4_20210739_20210735_20221237.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\S3_S4_20210739_20210735_20221237.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/S3_S4_20210739_20210735_20221237.dir/build: S3_S4_20210739_20210735_20221237.exe
.PHONY : CMakeFiles/S3_S4_20210739_20210735_20221237.dir/build

CMakeFiles/S3_S4_20210739_20210735_20221237.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\S3_S4_20210739_20210735_20221237.dir\cmake_clean.cmake
.PHONY : CMakeFiles/S3_S4_20210739_20210735_20221237.dir/clean

CMakeFiles/S3_S4_20210739_20210735_20221237.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\c++ Codes\S3,S4_20210739_20210735_20221237" "D:\c++ Codes\S3,S4_20210739_20210735_20221237" "D:\c++ Codes\S3,S4_20210739_20210735_20221237\cmake-build-debug" "D:\c++ Codes\S3,S4_20210739_20210735_20221237\cmake-build-debug" "D:\c++ Codes\S3,S4_20210739_20210735_20221237\cmake-build-debug\CMakeFiles\S3_S4_20210739_20210735_20221237.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/S3_S4_20210739_20210735_20221237.dir/depend

