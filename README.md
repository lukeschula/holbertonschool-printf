# Recreating printf()...the long way.

Welcome to the my repository! In here contains a project recreating the printf function without case or switch statements.This project was done trimester 1 at Holberton School Tulsa, and the project was written using the C programming language.


## Project Requirements 
  - Compiler used to test code: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
  - Authorized functions and macros:
    - write (man 2 write)
    - malloc (man 3 malloc)
    - free (man 3 free)
    - va_start (man 3 va_start)
    - va_end (man 3 va_end)
    - va_copy (man 3 va_copy)
    - va_arg (man 3 va_arg)
  - Tasks
    - Task 0: Write a function that produces output according to a format.You need to handle the following conversion specifiers: c, s, %
    - Task 1: Handle the following conversion specifiers: d, i
    - Task 3: Create a man page for your function.
  - Code must use Betty style. It will be checked using betty-style.pl and betty-doc.pl.
  - You are not allowed to use global variables.
  - No more than 5 functions per file.
  - The prototypes of all your functions should be included in your header file called main.h.
  - All your header files should be include guarded.
  - Note that we will not provide the _putchar function for this project.


## Context to project
 
### File Description
  - main.h
    - The header file, used to declare function prototypes, macros, and data types that will be used across multiple source files.
    - Provides a common set of declarations that can be used by all source files in the project. 
  - format_struct.c
    - This file defines a function named check_spec that checks if a given character is a valid format specifier for a custom printf-like function.
    - The function takes a pointer to a character (which is expected to be a format specifier like 'c', 's', '%', 'd', or 'i') and returns a function pointer to the appropriate function for handling that specifier.
  - printf.c
    - This file defines a function named _printf that is a simplified version of the standard printf function.
    - The function takes a format string and a variable number of arguments, and it prints the arguments according to the format string. The function then  returns the number of characters printed. 
  - spec_functions.c
    - This file holds three functions; print_char, print_pct, and print_str.
    - These functions are used in conjunction with the _printf function to handle specific format specifiers ('c', 's', & '%').
  - putchar.c
    - This file houses a simple _putchar function that writes a character to the standard output (stdout).
    - The function takes a character c as input and uses the write system call to write that character to the file descriptor 1, which represents the standard output.
  - dec_spec.c
    - This file  defines a function named print_dec that is used to handle the '%d' and '%i' format specifiers.
    - This function is to print a decimal integer and return the length of the printed number.
  - man_3_printf
    - Manual with additional information of the functions and their intended purpose for this project.
#### Code Breakdown
  - main.h:
    1. Declares an array called 'b' of 'form_t' structures.
    1. Function loops over the array. Each structure in the array checks for 'type' member matches the character pointed by '*format'.
    1. If a match is found, it returns the 'f' member of the structure. 
    1. If it doesnt match, return 'NULL'.
  - 
  - 
  - 
  - 
  - 
