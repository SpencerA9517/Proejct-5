# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\Project1_Starter_Code.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\Project1_Starter_Code.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Project1_Starter_Code.dir\flags.make

CMakeFiles\Project1_Starter_Code.dir\ColonAutomaton.cpp.obj: CMakeFiles\Project1_Starter_Code.dir\flags.make
CMakeFiles\Project1_Starter_Code.dir\ColonAutomaton.cpp.obj: ..\ColonAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Project1_Starter_Code.dir/ColonAutomaton.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Project1_Starter_Code.dir\ColonAutomaton.cpp.obj /FdCMakeFiles\Project1_Starter_Code.dir\ /FS -c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\ColonAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\ColonAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1_Starter_Code.dir/ColonAutomaton.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\Project1_Starter_Code.dir\ColonAutomaton.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\ColonAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\ColonAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1_Starter_Code.dir/ColonAutomaton.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Project1_Starter_Code.dir\ColonAutomaton.cpp.s /c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\ColonAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\ColonDashAutomaton.cpp.obj: CMakeFiles\Project1_Starter_Code.dir\flags.make
CMakeFiles\Project1_Starter_Code.dir\ColonDashAutomaton.cpp.obj: ..\ColonDashAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Project1_Starter_Code.dir/ColonDashAutomaton.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Project1_Starter_Code.dir\ColonDashAutomaton.cpp.obj /FdCMakeFiles\Project1_Starter_Code.dir\ /FS -c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\ColonDashAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\ColonDashAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1_Starter_Code.dir/ColonDashAutomaton.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\Project1_Starter_Code.dir\ColonDashAutomaton.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\ColonDashAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\ColonDashAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1_Starter_Code.dir/ColonDashAutomaton.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Project1_Starter_Code.dir\ColonDashAutomaton.cpp.s /c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\ColonDashAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\Lexer.cpp.obj: CMakeFiles\Project1_Starter_Code.dir\flags.make
CMakeFiles\Project1_Starter_Code.dir\Lexer.cpp.obj: ..\Lexer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Project1_Starter_Code.dir/Lexer.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Project1_Starter_Code.dir\Lexer.cpp.obj /FdCMakeFiles\Project1_Starter_Code.dir\ /FS -c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\Lexer.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\Lexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1_Starter_Code.dir/Lexer.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\Project1_Starter_Code.dir\Lexer.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\Lexer.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\Lexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1_Starter_Code.dir/Lexer.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Project1_Starter_Code.dir\Lexer.cpp.s /c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\Lexer.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\main.cpp.obj: CMakeFiles\Project1_Starter_Code.dir\flags.make
CMakeFiles\Project1_Starter_Code.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Project1_Starter_Code.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Project1_Starter_Code.dir\main.cpp.obj /FdCMakeFiles\Project1_Starter_Code.dir\ /FS -c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\main.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1_Starter_Code.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\Project1_Starter_Code.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\main.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1_Starter_Code.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Project1_Starter_Code.dir\main.cpp.s /c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\main.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\Token.cpp.obj: CMakeFiles\Project1_Starter_Code.dir\flags.make
CMakeFiles\Project1_Starter_Code.dir\Token.cpp.obj: ..\Token.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Project1_Starter_Code.dir/Token.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Project1_Starter_Code.dir\Token.cpp.obj /FdCMakeFiles\Project1_Starter_Code.dir\ /FS -c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\Token.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\Token.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1_Starter_Code.dir/Token.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\Project1_Starter_Code.dir\Token.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\Token.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\Token.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1_Starter_Code.dir/Token.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Project1_Starter_Code.dir\Token.cpp.s /c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\Token.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\CommaAutomaton.cpp.obj: CMakeFiles\Project1_Starter_Code.dir\flags.make
CMakeFiles\Project1_Starter_Code.dir\CommaAutomaton.cpp.obj: ..\CommaAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Project1_Starter_Code.dir/CommaAutomaton.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Project1_Starter_Code.dir\CommaAutomaton.cpp.obj /FdCMakeFiles\Project1_Starter_Code.dir\ /FS -c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\CommaAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\CommaAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1_Starter_Code.dir/CommaAutomaton.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\Project1_Starter_Code.dir\CommaAutomaton.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\CommaAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\CommaAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1_Starter_Code.dir/CommaAutomaton.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Project1_Starter_Code.dir\CommaAutomaton.cpp.s /c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\CommaAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\PeriodAutomaton.cpp.obj: CMakeFiles\Project1_Starter_Code.dir\flags.make
CMakeFiles\Project1_Starter_Code.dir\PeriodAutomaton.cpp.obj: ..\PeriodAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Project1_Starter_Code.dir/PeriodAutomaton.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Project1_Starter_Code.dir\PeriodAutomaton.cpp.obj /FdCMakeFiles\Project1_Starter_Code.dir\ /FS -c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\PeriodAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\PeriodAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1_Starter_Code.dir/PeriodAutomaton.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\Project1_Starter_Code.dir\PeriodAutomaton.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\PeriodAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\PeriodAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1_Starter_Code.dir/PeriodAutomaton.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Project1_Starter_Code.dir\PeriodAutomaton.cpp.s /c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\PeriodAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\Q_MarkAutomaton.cpp.obj: CMakeFiles\Project1_Starter_Code.dir\flags.make
CMakeFiles\Project1_Starter_Code.dir\Q_MarkAutomaton.cpp.obj: ..\Q_MarkAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Project1_Starter_Code.dir/Q_MarkAutomaton.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Project1_Starter_Code.dir\Q_MarkAutomaton.cpp.obj /FdCMakeFiles\Project1_Starter_Code.dir\ /FS -c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\Q_MarkAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\Q_MarkAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1_Starter_Code.dir/Q_MarkAutomaton.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\Project1_Starter_Code.dir\Q_MarkAutomaton.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\Q_MarkAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\Q_MarkAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1_Starter_Code.dir/Q_MarkAutomaton.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Project1_Starter_Code.dir\Q_MarkAutomaton.cpp.s /c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\Q_MarkAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\LeftParenAutomaton.cpp.obj: CMakeFiles\Project1_Starter_Code.dir\flags.make
CMakeFiles\Project1_Starter_Code.dir\LeftParenAutomaton.cpp.obj: ..\LeftParenAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Project1_Starter_Code.dir/LeftParenAutomaton.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Project1_Starter_Code.dir\LeftParenAutomaton.cpp.obj /FdCMakeFiles\Project1_Starter_Code.dir\ /FS -c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\LeftParenAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\LeftParenAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1_Starter_Code.dir/LeftParenAutomaton.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\Project1_Starter_Code.dir\LeftParenAutomaton.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\LeftParenAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\LeftParenAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1_Starter_Code.dir/LeftParenAutomaton.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Project1_Starter_Code.dir\LeftParenAutomaton.cpp.s /c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\LeftParenAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\RightParenAutomaton.cpp.obj: CMakeFiles\Project1_Starter_Code.dir\flags.make
CMakeFiles\Project1_Starter_Code.dir\RightParenAutomaton.cpp.obj: ..\RightParenAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Project1_Starter_Code.dir/RightParenAutomaton.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Project1_Starter_Code.dir\RightParenAutomaton.cpp.obj /FdCMakeFiles\Project1_Starter_Code.dir\ /FS -c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\RightParenAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\RightParenAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1_Starter_Code.dir/RightParenAutomaton.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\Project1_Starter_Code.dir\RightParenAutomaton.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\RightParenAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\RightParenAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1_Starter_Code.dir/RightParenAutomaton.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Project1_Starter_Code.dir\RightParenAutomaton.cpp.s /c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\RightParenAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\MultiplyAutomaton.cpp.obj: CMakeFiles\Project1_Starter_Code.dir\flags.make
CMakeFiles\Project1_Starter_Code.dir\MultiplyAutomaton.cpp.obj: ..\MultiplyAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Project1_Starter_Code.dir/MultiplyAutomaton.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Project1_Starter_Code.dir\MultiplyAutomaton.cpp.obj /FdCMakeFiles\Project1_Starter_Code.dir\ /FS -c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\MultiplyAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\MultiplyAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1_Starter_Code.dir/MultiplyAutomaton.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\Project1_Starter_Code.dir\MultiplyAutomaton.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\MultiplyAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\MultiplyAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1_Starter_Code.dir/MultiplyAutomaton.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Project1_Starter_Code.dir\MultiplyAutomaton.cpp.s /c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\MultiplyAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\AddAutomaton.cpp.obj: CMakeFiles\Project1_Starter_Code.dir\flags.make
CMakeFiles\Project1_Starter_Code.dir\AddAutomaton.cpp.obj: ..\AddAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/Project1_Starter_Code.dir/AddAutomaton.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Project1_Starter_Code.dir\AddAutomaton.cpp.obj /FdCMakeFiles\Project1_Starter_Code.dir\ /FS -c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\AddAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\AddAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1_Starter_Code.dir/AddAutomaton.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\Project1_Starter_Code.dir\AddAutomaton.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\AddAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\AddAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1_Starter_Code.dir/AddAutomaton.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Project1_Starter_Code.dir\AddAutomaton.cpp.s /c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\AddAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\SchemesAutomaton.cpp.obj: CMakeFiles\Project1_Starter_Code.dir\flags.make
CMakeFiles\Project1_Starter_Code.dir\SchemesAutomaton.cpp.obj: ..\SchemesAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/Project1_Starter_Code.dir/SchemesAutomaton.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Project1_Starter_Code.dir\SchemesAutomaton.cpp.obj /FdCMakeFiles\Project1_Starter_Code.dir\ /FS -c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\SchemesAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\SchemesAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1_Starter_Code.dir/SchemesAutomaton.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\Project1_Starter_Code.dir\SchemesAutomaton.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\SchemesAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\SchemesAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1_Starter_Code.dir/SchemesAutomaton.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Project1_Starter_Code.dir\SchemesAutomaton.cpp.s /c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\SchemesAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\FactsAutomaton.cpp.obj: CMakeFiles\Project1_Starter_Code.dir\flags.make
CMakeFiles\Project1_Starter_Code.dir\FactsAutomaton.cpp.obj: ..\FactsAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/Project1_Starter_Code.dir/FactsAutomaton.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Project1_Starter_Code.dir\FactsAutomaton.cpp.obj /FdCMakeFiles\Project1_Starter_Code.dir\ /FS -c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\FactsAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\FactsAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1_Starter_Code.dir/FactsAutomaton.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\Project1_Starter_Code.dir\FactsAutomaton.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\FactsAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\FactsAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1_Starter_Code.dir/FactsAutomaton.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Project1_Starter_Code.dir\FactsAutomaton.cpp.s /c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\FactsAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\RulesAutomaton.cpp.obj: CMakeFiles\Project1_Starter_Code.dir\flags.make
CMakeFiles\Project1_Starter_Code.dir\RulesAutomaton.cpp.obj: ..\RulesAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/Project1_Starter_Code.dir/RulesAutomaton.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Project1_Starter_Code.dir\RulesAutomaton.cpp.obj /FdCMakeFiles\Project1_Starter_Code.dir\ /FS -c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\RulesAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\RulesAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1_Starter_Code.dir/RulesAutomaton.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\Project1_Starter_Code.dir\RulesAutomaton.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\RulesAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\RulesAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1_Starter_Code.dir/RulesAutomaton.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Project1_Starter_Code.dir\RulesAutomaton.cpp.s /c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\RulesAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\QueriesAutomaton.cpp.obj: CMakeFiles\Project1_Starter_Code.dir\flags.make
CMakeFiles\Project1_Starter_Code.dir\QueriesAutomaton.cpp.obj: ..\QueriesAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/Project1_Starter_Code.dir/QueriesAutomaton.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Project1_Starter_Code.dir\QueriesAutomaton.cpp.obj /FdCMakeFiles\Project1_Starter_Code.dir\ /FS -c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\QueriesAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\QueriesAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1_Starter_Code.dir/QueriesAutomaton.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\Project1_Starter_Code.dir\QueriesAutomaton.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\QueriesAutomaton.cpp"
<<

CMakeFiles\Project1_Starter_Code.dir\QueriesAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1_Starter_Code.dir/QueriesAutomaton.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Project1_Starter_Code.dir\QueriesAutomaton.cpp.s /c "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\QueriesAutomaton.cpp"
<<

# Object files for target Project1_Starter_Code
Project1_Starter_Code_OBJECTS = \
"CMakeFiles\Project1_Starter_Code.dir\ColonAutomaton.cpp.obj" \
"CMakeFiles\Project1_Starter_Code.dir\ColonDashAutomaton.cpp.obj" \
"CMakeFiles\Project1_Starter_Code.dir\Lexer.cpp.obj" \
"CMakeFiles\Project1_Starter_Code.dir\main.cpp.obj" \
"CMakeFiles\Project1_Starter_Code.dir\Token.cpp.obj" \
"CMakeFiles\Project1_Starter_Code.dir\CommaAutomaton.cpp.obj" \
"CMakeFiles\Project1_Starter_Code.dir\PeriodAutomaton.cpp.obj" \
"CMakeFiles\Project1_Starter_Code.dir\Q_MarkAutomaton.cpp.obj" \
"CMakeFiles\Project1_Starter_Code.dir\LeftParenAutomaton.cpp.obj" \
"CMakeFiles\Project1_Starter_Code.dir\RightParenAutomaton.cpp.obj" \
"CMakeFiles\Project1_Starter_Code.dir\MultiplyAutomaton.cpp.obj" \
"CMakeFiles\Project1_Starter_Code.dir\AddAutomaton.cpp.obj" \
"CMakeFiles\Project1_Starter_Code.dir\SchemesAutomaton.cpp.obj" \
"CMakeFiles\Project1_Starter_Code.dir\FactsAutomaton.cpp.obj" \
"CMakeFiles\Project1_Starter_Code.dir\RulesAutomaton.cpp.obj" \
"CMakeFiles\Project1_Starter_Code.dir\QueriesAutomaton.cpp.obj"

# External object files for target Project1_Starter_Code
Project1_Starter_Code_EXTERNAL_OBJECTS =

Project1_Starter_Code.exe: CMakeFiles\Project1_Starter_Code.dir\ColonAutomaton.cpp.obj
Project1_Starter_Code.exe: CMakeFiles\Project1_Starter_Code.dir\ColonDashAutomaton.cpp.obj
Project1_Starter_Code.exe: CMakeFiles\Project1_Starter_Code.dir\Lexer.cpp.obj
Project1_Starter_Code.exe: CMakeFiles\Project1_Starter_Code.dir\main.cpp.obj
Project1_Starter_Code.exe: CMakeFiles\Project1_Starter_Code.dir\Token.cpp.obj
Project1_Starter_Code.exe: CMakeFiles\Project1_Starter_Code.dir\CommaAutomaton.cpp.obj
Project1_Starter_Code.exe: CMakeFiles\Project1_Starter_Code.dir\PeriodAutomaton.cpp.obj
Project1_Starter_Code.exe: CMakeFiles\Project1_Starter_Code.dir\Q_MarkAutomaton.cpp.obj
Project1_Starter_Code.exe: CMakeFiles\Project1_Starter_Code.dir\LeftParenAutomaton.cpp.obj
Project1_Starter_Code.exe: CMakeFiles\Project1_Starter_Code.dir\RightParenAutomaton.cpp.obj
Project1_Starter_Code.exe: CMakeFiles\Project1_Starter_Code.dir\MultiplyAutomaton.cpp.obj
Project1_Starter_Code.exe: CMakeFiles\Project1_Starter_Code.dir\AddAutomaton.cpp.obj
Project1_Starter_Code.exe: CMakeFiles\Project1_Starter_Code.dir\SchemesAutomaton.cpp.obj
Project1_Starter_Code.exe: CMakeFiles\Project1_Starter_Code.dir\FactsAutomaton.cpp.obj
Project1_Starter_Code.exe: CMakeFiles\Project1_Starter_Code.dir\RulesAutomaton.cpp.obj
Project1_Starter_Code.exe: CMakeFiles\Project1_Starter_Code.dir\QueriesAutomaton.cpp.obj
Project1_Starter_Code.exe: CMakeFiles\Project1_Starter_Code.dir\build.make
Project1_Starter_Code.exe: CMakeFiles\Project1_Starter_Code.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_17) "Linking CXX executable Project1_Starter_Code.exe"
	"C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Project1_Starter_Code.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Project1_Starter_Code.dir\objects1.rsp @<<
 /out:Project1_Starter_Code.exe /implib:Project1_Starter_Code.lib /pdb:"C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\cmake-build-debug\Project1_Starter_Code.pdb" /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Project1_Starter_Code.dir\build: Project1_Starter_Code.exe
.PHONY : CMakeFiles\Project1_Starter_Code.dir\build

CMakeFiles\Project1_Starter_Code.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Project1_Starter_Code.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Project1_Starter_Code.dir\clean

CMakeFiles\Project1_Starter_Code.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code" "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code" "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\cmake-build-debug" "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\cmake-build-debug" "C:\Users\seasp\Documents\Git Repos\GitDir\Project-1\Project1_Starter_Code\cmake-build-debug\CMakeFiles\Project1_Starter_Code.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\Project1_Starter_Code.dir\depend

