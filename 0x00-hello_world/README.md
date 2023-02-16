Here are some things i learnt solving this task:
1. Who invented C
2. what happens when i type gcc main.c
3. The default program name when compiling with gcc
4. How to find the right header to include in your source code when using a standard library function
5. How to print text using printf, puts and putchar
6. How to get the size of specific type using the unary operator sizeof
7. The official C coding style and how to check my code with betty-style
8. How the main function influence the return value of the program.
TASK DECRIPTION:
0. Preprocessor:A script that runs a C file through the preprocessor and save the result into another file.
The C file name will be saved in the variable $CFILE

1. Compiler: A script that compiles a C file but does not link.
The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .o instead of .c.

2. Assembler: A script that generates the assembly code of a C code and save it in an output file.
The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .s instead of .c

3. Name: A script that compiles a C file and creates an executable named cisfun.
The C file name will be saved in the variable $CFILE

4. Hello, puts: A (C) program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
Use the function puts
You are not allowed to use printf
Your program should end with the value 0

5. Hello, printf: A (C) program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
Use the function printf
You are not allowed to use the function puts
Your program should return 0
Your program should compile without warning when using the -Wall gcc option

6. Size is not grandeur, and territory does not make a nation: A (C) program that prints the size of various types on the computer it is compiled and run on.
You should produce the exact same output as in the example
Warnings are allowed
Your program should return 0
You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option

7. Intel: A script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
The C file name will be saved in the variable $CFILE.
The output file should be named the same as the C file, but with the extension .s instead of .c

8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity: A C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
Your program should return 1
Your program should compile without any warnings when using the -Wall gcc option
The output should be saved in the file 
