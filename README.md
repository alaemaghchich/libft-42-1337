Description

Libft is my first project at 42 school. In this project, I make my own C library called libft.a. This library has many basic and useful functions. I will use this library in my future C projects.

Library Details

My library has three parts:

Standard C Functions: I wrote my own versions of normal C functions. Examples: ft_strlen, ft_isalpha, ft_memset, ft_memcpy, ft_atoi, ft_strdup.

Extra Functions: These are new functions to help work with text and files. Examples: ft_substr, ft_strjoin, ft_split, ft_itoa, ft_putstr_fd.

Linked List Functions: These functions help me create and use linked lists. Examples: ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap.

Instructions

Here is how to compile and use this library:

Build the library: Type make. This will create the libft.a file.

Clean up: Type make clean to remove the .o files. Type make fclean to remove the .o files and the libft.a file.

Build again: Type make re to clean everything and make the library again.

How to use: In your C code, write #include "libft.h". When you compile your program, add -L. -lft (example: cc main.c -L. -lft).

Resources

Manuals: I used the Linux manual pages (like man 3 strlen) to learn how the functions should work.

AI Usage: I used AI to help me understand hard words in the manual and to find errors in my logic. I did not use AI to write my code.