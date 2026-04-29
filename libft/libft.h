/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryanan <eryanan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:12:31 by eryanan           #+#    #+#             */
/*   Updated: 2026/04/29 01:44:21 by eryanan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdint.h>

void		*ft_calloc(size_t count, size_t size);

int			ft_atoi(const char *str);

void		ft_bzero(void *dest, size_t n);

int			ft_isalnum(int c);

int			ft_isalpha(int i);

int			ft_isascii(int c);

int			ft_isdigit(int c);

int			ft_isprint(int c);

void		*ft_memchr(const void *mb, int s, size_t size);

int			ft_memcmp(const void *ptr1, const void *ptr2, size_t s);

void		*ft_memcpy(void *dest, const void *src, size_t size);

void		*ft_memmove(void *dest, const void *src, size_t n);

void		*ft_memset(void *s, int c, size_t n);

const char	*ft_strdup(char *src);

size_t		ft_strlcat(char *dst, const char *src, size_t size);

size_t		ft_strlcpy(char *dst, const char *src, size_t size);

size_t		ft_strlen(const char *str);

int			ft_strncmp(const char *s1, const char *s2, size_t len);

char		*ft_strnstr(const char *big, const char *lit, size_t len);

char		*ft_strrchr(const char *s, int c);

char		*ft_strchr(const char *str, int c);

int			ft_tolower(int c);

int			ft_toupper(int c);

void		ft_putchar_fd(char c, int fd);

void		ft_putstr_fd(char *s, int fd);
