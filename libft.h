/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:39:02 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/24 18:20:47 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isdigit(int nb);
int     ft_isprint(int c);
int     ft_tolower(int ch);
size_t  ft_strlen(const char *s);
int     ft_isascii( int c );
int     ft_toupper(int ch);
void    *ft_memset(void *p , int c, size_t n);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strnstr(const char *s1, const char *s2, size_t len);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
void    ft_bzero(void *s, size_t n);
char    *ft_strdup(const char *s1);
void *ft_calloc(size_t ct, size_t sz);
void    *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
size_t  ft_strlcpy(char *dst, const char *src, size_t n);
size_t  ft_strlcat(char *dst, const char *src, size_t z);
char    *ft_strjoin(char const *s1, char const *s2);
void    *ft_memcpy(void *dst, const void *src, size_t n);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strtrim(char const *s1, char const *set);
int     ft_atoi(const char *str);
void    ft_putnbr_fd(int n, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putchar_fd(char c, int fd);
void    ft_putendl_fd(char *s, int fd);
char **ft_split(char *str, char c);
void    ft_striteri(char *s, void (*f)(unsigned int,char*));
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char    *ft_itoa(int n);

#endif
