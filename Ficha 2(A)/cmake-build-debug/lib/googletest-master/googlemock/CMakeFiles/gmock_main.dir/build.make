# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\adria_ek1ciji\OneDrive - Universidade do Porto\Feup - LEIC\2º ano\1º semestre\Algoritmos e Estruturas de Dados\Fichas\Ficha 2\aed2223_p02"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\adria_ek1ciji\OneDrive - Universidade do Porto\Feup - LEIC\2º ano\1º semestre\Algoritmos e Estruturas de Dados\Fichas\Ficha 2\aed2223_p02\cmake-build-debug"

# Include any dependencies generated for this target.
include lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/progress.make

# Include the compile flags for this target's objects.
include lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/flags.make

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.obj: lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/flags.make
lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.obj: lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/includes_CXX.rsp
lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.obj: ../lib/googletest-master/googlemock/src/gmock_main.cc
lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.obj: lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\adria_ek1ciji\OneDrive - Universidade do Porto\Feup - LEIC\2º ano\1º semestre\Algoritmos e Estruturas de Dados\Fichas\Ficha 2\aed2223_p02\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.obj"
	cd /d C:\Users\ADRIA_~1\ONEDRI~1\FEUP-L~1\2ANO~1\1SEMES~1\ALGORI~1\Fichas\FICHA2~1\AED222~1\CMAKE-~1\lib\GOOGLE~1\GOOGLE~1 && C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.obj -MF CMakeFiles\gmock_main.dir\src\gmock_main.cc.obj.d -o CMakeFiles\gmock_main.dir\src\gmock_main.cc.obj -c "C:\Users\adria_ek1ciji\OneDrive - Universidade do Porto\Feup - LEIC\2º ano\1º semestre\Algoritmos e Estruturas de Dados\Fichas\Ficha 2\aed2223_p02\lib\googletest-master\googlemock\src\gmock_main.cc"

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock_main.dir/src/gmock_main.cc.i"
	cd /d C:\Users\ADRIA_~1\ONEDRI~1\FEUP-L~1\2ANO~1\1SEMES~1\ALGORI~1\Fichas\FICHA2~1\AED222~1\CMAKE-~1\lib\GOOGLE~1\GOOGLE~1 && C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\adria_ek1ciji\OneDrive - Universidade do Porto\Feup - LEIC\2º ano\1º semestre\Algoritmos e Estruturas de Dados\Fichas\Ficha 2\aed2223_p02\lib\googletest-master\googlemock\src\gmock_main.cc" > CMakeFiles\gmock_main.dir\src\gmock_main.cc.i

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock_main.dir/src/gmock_main.cc.s"
	cd /d C:\Users\ADRIA_~1\ONEDRI~1\FEUP-L~1\2ANO~1\1SEMES~1\ALGORI~1\Fichas\FICHA2~1\AED222~1\CMAKE-~1\lib\GOOGLE~1\GOOGLE~1 && C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\adria_ek1ciji\OneDrive - Universidade do Porto\Feup - LEIC\2º ano\1º semestre\Algoritmos e Estruturas de Dados\Fichas\Ficha 2\aed2223_p02\lib\googletest-master\googlemock\src\gmock_main.cc" -o CMakeFiles\gmock_main.dir\src\gmock_main.cc.s

# Object files for target gmock_main
gmock_main_OBJECTS = \
"CMakeFiles/gmock_main.dir/src/gmock_main.cc.obj"

# External object files for target gmock_main
gmock_main_EXTERNAL_OBJECTS =

lib/libgmock_maind.a: lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.obj
lib/libgmock_maind.a: lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/build.make
lib/libgmock_maind.a: lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\adria_ek1ciji\OneDrive - Universidade do Porto\Feup - LEIC\2º ano\1º semestre\Algoritmos e Estruturas de Dados\Fichas\Ficha 2\aed2223_p02\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ..\..\libgmock_maind.a"
	cd /d C:\Users\ADRIA_~1\ONEDRI~1\FEUP-L~1\2ANO~1\1SEMES~1\ALGORI~1\Fichas\FICHA2~1\AED222~1\CMAKE-~1\lib\GOOGLE~1\GOOGLE~1 && $(CMAKE_COMMAND) -P CMakeFiles\gmock_main.dir\cmake_clean_target.cmake
	cd /d C:\Users\ADRIA_~1\ONEDRI~1\FEUP-L~1\2ANO~1\1SEMES~1\ALGORI~1\Fichas\FICHA2~1\AED222~1\CMAKE-~1\lib\GOOGLE~1\GOOGLE~1 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\gmock_main.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/build: lib/libgmock_maind.a
.PHONY : lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/build

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/clean:
	cd /d C:\Users\ADRIA_~1\ONEDRI~1\FEUP-L~1\2ANO~1\1SEMES~1\ALGORI~1\Fichas\FICHA2~1\AED222~1\CMAKE-~1\lib\GOOGLE~1\GOOGLE~1 && $(CMAKE_COMMAND) -P CMakeFiles\gmock_main.dir\cmake_clean.cmake
.PHONY : lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/clean

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\adria_ek1ciji\OneDrive - Universidade do Porto\Feup - LEIC\2º ano\1º semestre\Algoritmos e Estruturas de Dados\Fichas\Ficha 2\aed2223_p02" "C:\Users\adria_ek1ciji\OneDrive - Universidade do Porto\Feup - LEIC\2º ano\1º semestre\Algoritmos e Estruturas de Dados\Fichas\Ficha 2\aed2223_p02\lib\googletest-master\googlemock" "C:\Users\adria_ek1ciji\OneDrive - Universidade do Porto\Feup - LEIC\2º ano\1º semestre\Algoritmos e Estruturas de Dados\Fichas\Ficha 2\aed2223_p02\cmake-build-debug" "C:\Users\adria_ek1ciji\OneDrive - Universidade do Porto\Feup - LEIC\2º ano\1º semestre\Algoritmos e Estruturas de Dados\Fichas\Ficha 2\aed2223_p02\cmake-build-debug\lib\googletest-master\googlemock" "C:\Users\adria_ek1ciji\OneDrive - Universidade do Porto\Feup - LEIC\2º ano\1º semestre\Algoritmos e Estruturas de Dados\Fichas\Ficha 2\aed2223_p02\cmake-build-debug\lib\googletest-master\googlemock\CMakeFiles\gmock_main.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/depend
