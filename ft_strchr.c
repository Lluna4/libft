/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:53:05 by ltranca-          #+#    #+#             */
/*   Updated: 2022/09/19 17:25:25 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *a, int ch)

{
	int			n;
	int			c;
	static char	b[50];

	n = -1;
	while (1)
	{
		n++;
		if ((int)a[n] == 0)
			return (0);
		if ((int)a[n] == ch)
		{
			c = n - 1;
			n = -1;
			while (1)
			{
				n++;
				c++;
				b[n] = a[c];
				if ((int)a[c] == 0)
					return (b);
			}
		}
	}
}

/* int main(void)
{
	char *c;
	char *d;
	char *b = "hola buenas";

	c = ft_strchr(b, 'n');
	d = strrchr(b, 'n');
	printf("%s\n", c);
	printf("%s", d);
} */