# Libft

**My own implementation of the C standard library functions, built from scratch as part of the 42 School curriculum.**

Libft is my first major C project. The goal is to recreate essential functions from the standard C library while developing a deeper understanding of memory management, pointers, data structures, and low-level programming.

## 📚 Project Overview

This project covers several fundamental areas of C programming:

- **Character classification and conversion**
- **Memory manipulation**
- **String manipulation**
- **Memory allocation**
- **File descriptor operations**
- **Linked lists (Bonus)**

## 🛠️ Implemented Functions

### 1. Character Checks & Conversion

| Function | Description |
|---|---|
| `ft_isalpha` | Checks whether a character is alphabetic. |
| `ft_isdigit` | Checks whether a character is a digit. |
| `ft_isalnum` | Checks whether a character is alphanumeric. |
| `ft_isascii` | Checks whether a character belongs to the ASCII set. |
| `ft_isprint` | Checks whether a character is printable. |
| `ft_toupper` | Converts a lowercase character to uppercase. |
| `ft_tolower` | Converts an uppercase character to lowercase. |

### 2. Memory Manipulation

| Function | Description |
|---|---|
| `ft_memset` | Fills a memory block with a specific value. |
| `ft_bzero` | Sets a memory block to zero. |
| `ft_memcpy` | Copies memory between non-overlapping regions. |
| `ft_memmove` | Copies memory safely, including overlapping regions. |
| `ft_memchr` | Searches for a byte in a memory block. |
| `ft_memcmp` | Compares two memory blocks. |
| `ft_calloc` | Allocates zero-initialized memory. |

### 3. String Manipulation

| Function | Description |
|---|---|
| `ft_strlen` | Calculates string length. |
| `ft_strchr` | Finds the first occurrence of a character. |
| `ft_strrchr` | Finds the last occurrence of a character. |
| `ft_strncmp` | Compares two strings up to a specified length. |
| `ft_strlcpy` | Copies a string with size limitation. |
| `ft_strlcat` | Concatenates strings with size limitation. |
| `ft_strnstr` | Searches for a substring within a limited length. |
| `ft_strdup` | Duplicates a string using dynamic allocation. |
| `ft_substr` | Extracts a substring. |
| `ft_strjoin` | Concatenates two strings into a new allocation. |
| `ft_strtrim` | Removes specified characters from both ends. |
| `ft_split` | Splits a string using a delimiter. |
| `ft_strmapi` | Creates a new string by applying a function to each character. |
| `ft_striteri` | Applies a function to each character of a string. |
| `ft_atoi` | Converts a string into an integer. |
| `ft_itoa` | Converts an integer into a string. |

### 4. File Descriptor Operations

| Function | Description |
|---|---|
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### 5. Linked Lists

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new linked-list node. |
| `ft_lstadd_front` | Adds a node to the beginning of a list. |
| `ft_lstadd_back` | Adds a node to the end of a list. |
| `ft_lstsize` | Counts the number of nodes in a list. |
| `ft_lstlast` | Returns the last node of a list. |

## ⚙️ Compilation

The project includes a Makefile to simplify compilation.

```bash
make        # Compile the library
make clean  # Remove object files
make fclean # Remove object files and library
make re     # Recompile everything
```

The compilation uses:

- `-Wall`
- `-Wextra`
- `-Werror`

## 📦 Library

The project generates a static library:

`libft.a`

To use it in another C project, include `libft.h` and link against the library during compilation.

## 🎯 What I'm Learning

Through this project, I'm strengthening my understanding of:

- Pointers and pointer arithmetic.
- Stack vs. heap memory.
- Dynamic memory allocation and deallocation.
- Buffer manipulation and memory safety.
- String processing and algorithms.
- Function pointers and callbacks.
- Linked lists and basic data structures.
- Building static libraries with Makefiles.
