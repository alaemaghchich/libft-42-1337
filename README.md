*This project has been created as part of the 42 curriculum by amaghchi.*

# Libft
<img width="150" height="150" alt="libfte" src="https://github.com/user-attachments/assets/0894142d-440e-4a24-84f3-a5fa13ef7937" />
<img width="1403" height="685" alt="image" src="https://github.com/user-attachments/assets/ba5a620f-6f04-4cbe-811e-e93cc4406390" />

## Description

Libft is a project from the 42 curriculum. Its goal is to create a personal C library by reimplementing several standard C library functions and developing additional utility functions.

This project provides an opportunity to understand how C works at a lower level, especially memory management, pointers, strings, and data structures.

The result is a reusable static library called `libft.a`, which can be used in future C projects.

## Instructions

### Compilation

To compile the library, run:

```bash
make
```

Available Makefile rules:

- `make`: Compiles the library.
- `make clean`: Removes object files.
- `make fclean`: Removes object files and the library.
- `make re`: Recompiles the entire library.

### Usage

Include the header file in your C program:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc main.c libft.a -o program
```

## Library Description

The library is organized into several categories:

### 1. Character Functions

Functions for checking and converting characters:

`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.

### 2. Memory Functions

Functions for manipulating memory blocks, including copying, comparing, filling, and allocating memory:

`ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`.

### 3. String Functions

Functions for measuring, searching, comparing, copying, and manipulating strings:

`ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strlcpy`, `ft_strlcat`, `ft_strnstr`, `ft_strdup`.

### 4. Additional Functions

Utility functions for creating and manipulating strings and converting data:

`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`.

### 5. File Descriptor Functions

Functions for writing characters, strings, and numbers to a specified file descriptor:

`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

### 6. Linked List Functions

Functions for creating, managing, and manipulating singly linked lists using the `t_list` structure.

Each node contains a pointer to its content and a pointer to the next node.

`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

## Resources

The following resources were used during the development and learning process:

- **Linux Man Pages:** Understanding standard C functions and their behavior.
- **Stack Overflow:** Finding explanations and discussing programming problems.
- **YouTube:** Following tutorials and understanding C programming concepts.
- **NotebookLM:** Reviewing and organizing technical information.
- **LLMs:** debugging errors, and reviewing programming concepts.

AI tools were used as learning and assistance tools, not as a replacement for understanding the code. Implementation, testing, debugging, and final decisions were carried out by the student.
