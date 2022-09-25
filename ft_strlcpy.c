/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:45:04 by ltranca-          #+#    #+#             */
/*   Updated: 2022/09/25 18:12:27 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)

{
	size_t	n;

	n = 0;
	if (!(size <= 0))
	{
		while (src[n] != '\0')
		{
			if (n == size)
			{
				n--;
				break ;
			}
			dest[n] = src[n];
			n++;
		}
		dest[n] = '\0';
	}
	return (ft_strlen(src));
}	

/* int main(void)
{
	int sz = 43;
	char  a[43];
	char  *b = "hola asjabisasbuhas";

	ft_strlcpy(a, b, sz);
	printf("%s", a);
} */