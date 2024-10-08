/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:06:19 by mbentahi          #+#    #+#             */
/*   Updated: 2024/08/07 21:15:50 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

# include <fcntl.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/wait.h>
# include <unistd.h>

int					ft_isalpha(int c);
int					ft_isdigit(int c);
char				*ft_strrchr(const char *str, int c);
int					ft_toupper(int ch);
int					ft_tolower(int ch);
char				*ft_strchr(const char *str, int c);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
size_t				ft_strlen(const char *str);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
void				*ft_memset(void *s, int c, size_t n);
int					ft_isprint(int c);
int					ft_isascii(int c);
int					ft_isalnum(int c);
int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t len);
void				*ft_calloc(size_t nmemb, size_t size);
char				*ft_strdup(const char *s);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
void				*ft_memcpy(void *dest, const void *src, size_t n);
char				*ft_strnstr(const char *big, const char *little,
						size_t len);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_substr1(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char *s1, char *s2);
char				*ft_strtrim(char const *s1, char const *set);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				**ft_split(char const *s, char c);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_itoa(int n);
char				*get_next_line(int fd);
char				*ft_buffer_reader(char *str, int fd);
void				ft_free2d(char **str);
int					ft_is_whitespace(char *str);
char				*ft_strndup(const char *s, int n);
int					ft_is_space(char c);
int					ft_strcmp(const char *s1, const char *s2);
char				**ft_strdup_2d(char **s);
void				*ft_realloc(void *ptr, size_t size);
void				**ft_realloc2d(void **ptr, size_t size);
int					ft_keyboardup(int c);
size_t				ft_strlen2d(char **str);
unsigned int		ft_rand(int reset, int seed);
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

#endif