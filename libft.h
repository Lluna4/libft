/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:07:19 by ltranca-          #+#    #+#             */
/*   Updated: 2022/09/19 17:35:47 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFT_H
# define LIBFT_H


# include <string.h>
# include <stdlib.h>
# include <stdio.h>

void ft_bzero(void *a, size_t size);
void *ft_calloc(size_t count, size_t size);
int	ft_isalnum(int a);
int	ft_isalpha(int a);
int	ft_isascii(int a);
int	ft_isdigit(int a);
int	ft_isprint(int a);
void *ft_memchr(const void *s, int c, size_t size);
int ft_memcmp(const void *a, const void *b, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t size);
void	*ft_memset(void *str, int ch, size_t n);
char	*ft_strchr(const char *a, int ch);
char *ft_strdup(const char *s1);
size_t  ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *a);
int	ft_strncmp(const char *a, const char *b, int ch);
char    *ft_strnstr(const char *a, const char *b, int ch);
char	*ft_strchr(const char *a, int ch);
int	ft_tolower(int a);
int	ft_toupper(int a);





#endif
