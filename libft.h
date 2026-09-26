#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

//libc functions
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *s);
void *ft_memset(void *s, int c, size_t n);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_atoi(const char *nptr);
void ft_bzero(void *s, size_t n);
char *ft_itoa(int n);
size_t ft_strlcpy(char *dst, const char *src, size_t dsize);
size_t ft_strlcat(char *dst, const char *src, size_t dsize);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t n);
char *strdup(const char *s);
void *ft_calloc(size_t nmemb, size_t size);
#endif