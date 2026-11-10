# ==============================================================================
# Makefile Overview & Logic
# ==============================================================================
# A Makefile is an automation tool that simplifies and manages the compilation
# process of a C project.
#
# Why use a Makefile?
# --------------------
# In large projects (e.g., 100+ .c files), manually running `gcc` on all files
# for every minor change is inefficient. 
#
# `make` solves this using incremental compilation:
# - It compares the modification timestamp of each `.c` file against its `.o` file.
# - If a `.c` file is newer than its `.o` file, `make` recompiles ONLY that file.
#
# Structure of a Rule:
# --------------------
#   target: dependencies
#   <TAB> recipe
#
# 1. Target       : Output file to create (e.g., library or executable).
# 2. Dependencies : Prerequisites needed before creating the target.
# 3. Recipe       : Shell command executed to build the target (must use TAB).
# ==============================================================================

#libft.a: ft_strlen.o ft_memcpy.o
#<tab>ar rcs libft.a ft_strlen.o ft_memcpy.o
#===============================================================================
NAME = libft.a

SRCS = ft_isalpha.c \
       ft_isdigit.c \
       ft_isalnum.c \
       ft_isascii.c \
       ft_isprint.c \
       ft_strlen.c \
       ft_memset.c \
       ft_bzero.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_strlcpy.c \
       ft_strlcat.c \
       ft_toupper.c \
       ft_tolower.c \
       ft_strchr.c \
       ft_strrchr.c \
       ft_strncmp.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_strnstr.c \
       ft_atoi.c \
       ft_calloc.c \
       ft_strdup.c \
       ft_substr.c \
       ft_strjoin.c \
       ft_strtrim.c \
       ft_split.c \
       ft_itoa.c \
       ft_strmapi.c \
       ft_striteri.c \
       ft_putchar_fd.c \
       ft_putstr_fd.c \
       ft_putendl_fd.c \
       ft_putnbr_fd.c \
       ft_lstnew.c \
       ft_lstadd_front.c \
       ft_lstsize.c \
       ft_lstlast.c \
       ft_lstadd_back.c \
       ft_lstdelone.c \
       ft_lstclear.c \
       ft_lstiter.c \
       ft_lstmap.c

OBJS	= $(SRCS:.c=.o)

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f
AR		= ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re