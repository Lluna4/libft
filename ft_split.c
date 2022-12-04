/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:17:15 by ltranca-          #+#    #+#             */
/*   Updated: 2022/12/04 17:29:33 by ltranca-         ###   ########.fr       */
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

void	ft_freeall(char **s)
{
	int	n;

	n = -1;
	while (*s)
	{
		free(*s);
		s++;
	}
	free(s);
}

	char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		n;
	int		pointer;
	char	*buff;

	if (!s)
		return (NULL);
	while (*s == c && *s)
		s++;
	n = ft_wordcount(s, c);
	ret = ft_calloc(n + 1, sizeof(char *));
	if (!ret)
		return (NULL);
	pointer = -1;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		n = ft_charcount(s, c);
		if (n <= 0)
		{
			if (*s == '\0')
				break ;
			else
			{
				ft_freeall(ret);
				return (ft_strdup(""));
			}
		}
		pointer++;
		buff = ft_substr(s, 0, n);
		if (!buff)
		{
			ft_freeall(ret);
			return (NULL);
		}
		ret[pointer] = buff;
		if (*s)
			s = s + n;
	}
	return (ret);
}
