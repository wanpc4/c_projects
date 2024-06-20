/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:27:37 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/20 09:02:05 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Function prototypes: 
*/
#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <unistd.h>
int		ft_isalpha(int c); //Completed 
int		ft_isdigit(int c); //Completed
int		ft_isalnum(int c); //Completed
int		ft_isascii(int c); //Completed
int		ft_isprint(int c); //Completed
size_t	ft_strlen(const char *s); //Completed
void	*ft_memset(void *s, int c, size_t n); //Completed
void	ft_bzero(void *s, size_t n); //Completed
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n); //Completed
void	*ft_memmove(void *dst, const void *src, size_t len); //Completed
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize); //Completed
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize); //Completed
int		ft_toupper(int c); //Completed
int		ft_tolower(int c); //Completed
char	*ft_strchr(const char *s, int c); //Completed
char	*ft_strrchr(const char *s, int c); //Completed
int		ft_strncmp(const char *s1, const char *s2, size_t n); //Completed
void	*ft_memchr(const void *s, int c, size_t n); //Completed
int		ft_memcmp(const void *s1, const void *s2, size_t n); //In progress...
char    *ft_strnstr(const char *haystack, const char *needle, size_t len); //
int		ft_atoi(const char *str); //Completed
void    *ft_calloc(size_t count, size_t size);
char    *ft_strdup(const char *s1);
char    *ft_substr(char const *s, unsigned int start, size_t len); //Completed
char    *ft_strjoin(char const *s1, char const *s2); //Completed
char    *ft_strtrim(char const *s1, char const *set); 
char    **ft_split(char const *s, char c); 
char    *ft_itoa(int n); //In progress...
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char)); 
void    ft_striteri(char *s, void (*f)(unsigned int, char*)); //Completed
void    ft_putchar_fd(char c, int fd); //Completed
void    ft_putstr_fd(char *s, int fd); //Completed
void    ft_putendl_fd(char *s, int fd); //Completed
void    ft_putnbr_fd(int n, int fd); //Completed
#endif