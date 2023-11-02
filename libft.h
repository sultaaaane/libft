#ifndef LIBFT
# define LIBFT

#include <stdlib.h>
#include <string.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
char *ft_strrchr(const char *str, int c);
int ft_toupper(int ch);
int ft_tolower(int ch);
char *ft_strchr(const char *str, int c);
int ft_strncmp(const char *str1, const char *str2, size_t n);
size_t ft_strlen(const char *str);
size_t strlcpy(char *dst, const char *src, size_t dstsize);
void ft_memset(void *str, int c, size_t n);
int ft_isprint(int c);
int ft_isascii(int c);
int ft_isalnum(int c);
int atoi(const char *str);


#endif