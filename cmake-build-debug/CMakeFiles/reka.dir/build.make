# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\reka

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\reka\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/reka.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/reka.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/reka.dir/flags.make

CMakeFiles/reka.dir/main.cpp.obj: CMakeFiles/reka.dir/flags.make
CMakeFiles/reka.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\reka\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/reka.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\reka.dir\main.cpp.obj -c C:\reka\main.cpp

CMakeFiles/reka.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reka.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\reka\main.cpp > CMakeFiles\reka.dir\main.cpp.i

CMakeFiles/reka.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reka.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\reka\main.cpp -o CMakeFiles\reka.dir\main.cpp.s

CMakeFiles/reka.dir/ThreeDimVector.cpp.obj: CMakeFiles/reka.dir/flags.make
CMakeFiles/reka.dir/ThreeDimVector.cpp.obj: ../ThreeDimVector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\reka\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/reka.dir/ThreeDimVector.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\reka.dir\ThreeDimVector.cpp.obj -c C:\reka\ThreeDimVector.cpp

CMakeFiles/reka.dir/ThreeDimVector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reka.dir/ThreeDimVector.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\reka\ThreeDimVector.cpp > CMakeFiles\reka.dir\ThreeDimVector.cpp.i

CMakeFiles/reka.dir/ThreeDimVector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reka.dir/ThreeDimVector.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\reka\ThreeDimVector.cpp -o CMakeFiles\reka.dir\ThreeDimVector.cpp.s

CMakeFiles/reka.dir/SerialPort.cpp.obj: CMakeFiles/reka.dir/flags.make
CMakeFiles/reka.dir/SerialPort.cpp.obj: ../SerialPort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\reka\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/reka.dir/SerialPort.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\reka.dir\SerialPort.cpp.obj -c C:\reka\SerialPort.cpp

CMakeFiles/reka.dir/SerialPort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reka.dir/SerialPort.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\reka\SerialPort.cpp > CMakeFiles\reka.dir\SerialPort.cpp.i

CMakeFiles/reka.dir/SerialPort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reka.dir/SerialPort.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\reka\SerialPort.cpp -o CMakeFiles\reka.dir\SerialPort.cpp.s

CMakeFiles/reka.dir/MouseController.cpp.obj: CMakeFiles/reka.dir/flags.make
CMakeFiles/reka.dir/MouseController.cpp.obj: ../MouseController.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\reka\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/reka.dir/MouseController.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\reka.dir\MouseController.cpp.obj -c C:\reka\MouseController.cpp

CMakeFiles/reka.dir/MouseController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reka.dir/MouseController.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\reka\MouseController.cpp > CMakeFiles\reka.dir\MouseController.cpp.i

CMakeFiles/reka.dir/MouseController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reka.dir/MouseController.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\reka\MouseController.cpp -o CMakeFiles\reka.dir\MouseController.cpp.s

CMakeFiles/reka.dir/VectorMovementConverter.cpp.obj: CMakeFiles/reka.dir/flags.make
CMakeFiles/reka.dir/VectorMovementConverter.cpp.obj: ../VectorMovementConverter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\reka\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/reka.dir/VectorMovementConverter.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\reka.dir\VectorMovementConverter.cpp.obj -c C:\reka\VectorMovementConverter.cpp

CMakeFiles/reka.dir/VectorMovementConverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reka.dir/VectorMovementConverter.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\reka\VectorMovementConverter.cpp > CMakeFiles\reka.dir\VectorMovementConverter.cpp.i

CMakeFiles/reka.dir/VectorMovementConverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reka.dir/VectorMovementConverter.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\reka\VectorMovementConverter.cpp -o CMakeFiles\reka.dir\VectorMovementConverter.cpp.s

# Object files for target reka
reka_OBJECTS = \
"CMakeFiles/reka.dir/main.cpp.obj" \
"CMakeFiles/reka.dir/ThreeDimVector.cpp.obj" \
"CMakeFiles/reka.dir/SerialPort.cpp.obj" \
"CMakeFiles/reka.dir/MouseController.cpp.obj" \
"CMakeFiles/reka.dir/VectorMovementConverter.cpp.obj"

# External object files for target reka
reka_EXTERNAL_OBJECTS =

reka.exe: CMakeFiles/reka.dir/main.cpp.obj
reka.exe: CMakeFiles/reka.dir/ThreeDimVector.cpp.obj
reka.exe: CMakeFiles/reka.dir/SerialPort.cpp.obj
reka.exe: CMakeFiles/reka.dir/MouseController.cpp.obj
reka.exe: CMakeFiles/reka.dir/VectorMovementConverter.cpp.obj
reka.exe: CMakeFiles/reka.dir/build.make
reka.exe: CMakeFiles/reka.dir/linklibs.rsp
reka.exe: CMakeFiles/reka.dir/objects1.rsp
reka.exe: CMakeFiles/reka.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\reka\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable reka.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\reka.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/reka.dir/build: reka.exe
.PHONY : CMakeFiles/reka.dir/build

CMakeFiles/reka.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\reka.dir\cmake_clean.cmake
.PHONY : CMakeFiles/reka.dir/clean

CMakeFiles/reka.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\reka C:\reka C:\reka\cmake-build-debug C:\reka\cmake-build-debug C:\reka\cmake-build-debug\CMakeFiles\reka.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/reka.dir/depend
