# 0x1C-Makefiles :smile:

This repository contains a series of tasks related to creating Makefiles and implementing a Python function for the ALX Low Level Programing curriculum

## Makefiles Tasks:

### Task 0 - 0-Makefile
A basic Makefile that builds an executable called "school" from "main.c" and "school.c". The Makefile contains a single rule "all" to build the executable.

### Task 1 - 1-Makefile
A Makefile with variables "CC" (compiler to be used) and "SRC" (list of .c files). The Makefile uses these variables to build the "school" executable. The rule "all" is used to build the executable.

### Task 2 - 2-Makefile
A more comprehensive Makefile with additional variables "OBJ" (list of .o files) and "NAME" (name of the executable). The Makefile recompiles only the updated source files. No list of .o files is allowed.

### Task 3 - 3-Makefile
An extended Makefile with rules "clean," "oclean," "fclean," and "re" in addition to "all." The Makefile provides options to clean temporary files, object files, and the executable. The "re" rule forces recompilation of all source files.

### Task 4 - 4-Makefile
A complete Makefile with the addition of the "CFLAGS" variable for compiler flags. The Makefile builds the "school" executable with the specified compiler flags.

### Python Task:

### Task 5 - 5-island_perimeter.py
This Python script contains a function "island_perimeter(grid)" that calculates the perimeter of an island described in the input grid. The grid is a list of lists of integers, where 0 represents a water zone, and 1 represents a land zone. The function computes the perimeter of the island by considering its connectivity with horizontal and vertical neighbors.

To execute the Python function, use the provided test script `5-main.py`.

Feel free to explore each task's respective directory for the Makefiles and Python script.

Note: For the Python task, you are not allowed to use any external modules, and the script must begin with the shebang #!/usr/bin/python3.

## Author :wink:

This project is implemented by `Nicholas Otieno`.
