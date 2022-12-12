/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:17:15 by ltranca-          #+#    #+#             */
/*   Updated: 2022/12/12 17:51:46 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char *a, char ch)
{
	int	n;

	n = 1;
	if (!*a)
		return (NULL);
	while (*a)
	{
		if (*a == ch)
		{
			n++;
			while (*a == ch)
				a++;
			if (!*a)
				n -= 1;
		}
		if (*a)
			a++;
	}
	return (n);
}

static int	ft_charcount(char *a, char ch)
{
	int	len;

	len = 0;
	while (*a != ch)
	{
		if (*a == '\0')
			break ;
		len++;
		a++;
	}
	return (len);
}

char	*ft_freeall(char **s)
{
	int	n;

	n = -1;
	while (*s)
	{
		free(*s);
		s++;
	}
	free(s);
	return (ft_strdup(" "));
}

static char	*ft_test(char *s, char c, char **ret, char *buff)
{
	int	pointer;
	int	n;

	pointer = -1;
	n = ft_wordcount(s, c);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		n = ft_charcount(s, c);
		if (n <= 0)
		{
			if (*s == '\0')
				break ;
			return (ft_freeall(ret));
		}
		pointer++;
		buff = ft_substr(s, 0, n);
		if (!buff)
			return (ft_freeall(ret));
		ret[pointer] = buff;
		if (*s)
			s = s + n;
	}
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		n;
	char	*buff;

	if (!s)
		return (NULL);
	while (*s == c && *s)
		s++;
	n = ft_wordcount(s, c);
	ret = ft_calloc(n + 1, sizeof(char *));
	if (!ret)
		return (NULL);
	return (ft_test(s, c, ret, buff));
}
