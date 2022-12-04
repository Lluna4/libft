/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:07:50 by ltranca-          #+#    #+#             */
/*   Updated: 2022/12/04 17:54:46 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *a, const char *b, size_t size)
{
	int		len;
	int		n;
	int		len2;
	char	*buff;

	len = ft_strlen(b) - 1;
	len2 = ft_strlen(a);
	buff = (char *)a;
	if ((unsigned int)size > ft_strlen(a) || (unsigned int)size < 0)
		size = ft_strlen(a);
	if (*b == '\0')
		return ((char *)a);
	while (ft_strlen(a) > len && *a != '\0' && (len2 - ft_strlen(a)) < size)
	{
		n = len;
		a = ft_strchr(a, b[0]);
		if (a == NULL)
			return (0);
		a = a + len;
		if ((len2 - (ft_strlen(a) - 1)) > (unsigned int)size)
			break ;
		while (n != 0)
		{
			if (*a != b[n])
			{
				a = a - n + 1;
				break ;
			}
			else
			{
				a--;
				n--;
			}
		}
		if (n == 0)
			return ((char *)a);
	}
	return (0);
}

/*
int main(void)
{
	char *c;
	char *d;
	char *b = "aaabcabcd";
	char *e = "aabc";

	c = ft_strnstr(b, e, -1);
	d = strnstr(b, e, -1);
	printf("%s\n", c);
	printf("%s", d);
}*/