*This activity has been created as part of the 42 curriculum by omajarad.*

# Description

libft is a custom C static library created as part of the 42 curriculum. The goal of this project is to recreate a collection of functions from the C standard library and implement additional utility functions commonly used when developing C programs.

The project provides an opportunity to develop a strong understanding of fundamental C concepts, including:

Memory management

Pointers

Strings and character manipulation

Dynamic memory allocation

File descriptors

Linked lists

Function pointers

The result of the project is a static library named libft.a, which can be compiled and linked with other C programs and reused in future 42 projects.

Library Description

The libft library contains several groups of functions.

Character Functions

Functions used to check and convert characters:

ft_isalpha

ft_isdigit

ft_isalnum

ft_isascii

ft_isprint

ft_toupper

ft_tolower

Memory Functions

Functions used to manipulate and allocate memory:

ft_memset

ft_bzero

ft_memcpy

ft_memmove

ft_memchr

ft_memcmp

ft_calloc

String Functions

Functions used to measure, copy, compare, and search strings:

ft_strlen

ft_strlcpy

ft_strlcat

ft_strchr

ft_strrchr

ft_strncmp

ft_strnstr

ft_strdup

Conversion Functions

Functions used to convert between integers and strings:

ft_atoi

ft_itoa

String Manipulation Functions

Functions used to create, modify, and process strings:

ft_substr

ft_strjoin

ft_strtrim

ft_split

ft_strmapi

ft_striteri

File Descriptor Functions

Functions used to write characters, strings, and integers to file descriptors:

ft_putchar_fd

ft_putstr_fd

ft_putendl_fd

ft_putnbr_fd

Linked List Functions

Functions used to create and manipulate singly linked lists using the t_list structure:

ft_lstnew

ft_lstadd_front

ft_lstadd_back

ft_lstsize

ft_lstlast

ft_lstdelone

ft_lstclear

ft_lstiter

ft_lstmap

The library is designed to be reusable in other C projects and can be linked with future 42 projects that require these utility functions.

# Instructions

The project uses a Makefile to compile the source files and create the static library.

Compilation

From the root of the repository, run:

make


This compiles the source files into object files (.o) and creates the libft.a static library.

Cleaning

To remove the object files:

make clean


To remove the object files and the compiled library:

make fclean


To remove the existing object files and library and rebuild everything:

make re

Testing

A test program can be compiled together with the library using:

cc -Wall -Wextra -Werror main.c libft.a


The resulting executable can then be used to test the library functions.

# Resources

The following resources were used during the development of this project:

C manual pages (man) — Used to understand function behavior, parameters, return values, and edge cases.

GeeksforGeeks — Used for explanations and examples related to C programming, memory management, strings, and linked lists.

W3Schools — Used as an additional reference for C syntax and programming concepts.

42 project documentation — Used to understand the project requirements, expected behavior, and constraints.

## AI Usage

AI was used during this project as a learning, writing, and debugging tool.

AI was used to:

Help write and organize parts of this README.md, including the descriptions of the library and its functions.

Explain C concepts and clarify the expected behavior of standard C functions.

Provide hints and guidance when I was stuck while implementing a function.

Help identify possible edge cases and debugging issues.

Explain compiler errors and suggest possible solutions.

Help improve the wording and structure of the project documentation.

The implementations of the library functions were developed and tested as part of the project. AI was used as an assistance tool for understanding, documentation, and debugging.
