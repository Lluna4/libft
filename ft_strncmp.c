/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:36:18 by ltranca-          #+#    #+#             */
/*   Updated: 2022/09/25 18:07:11 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_strncmp(const char *a, const char *b, int ch)

{
	int		n;

    n = 0;
    while (n < ch)
    {
        if (((unsigned char *)a)[n] != ((unsigned char *)b)[n])
            return (((unsigned char *)a)[n] - ((unsigned char *)b)[n]);
        n++;
    }
    return (0);
}

/* int main(void)
{
	int c;
	int d;
	char *b = "hola buenas";
	char *e = "holabuenas";

	c = ft_strncmp(b, e, 11);
	d = strncmp(b, e, 11);
	printf("%d\n", c);
	printf("%d", d);
} */