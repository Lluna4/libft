/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:07:50 by ltranca-          #+#    #+#             */
/*   Updated: 2022/09/19 17:25:25 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *a, const char *b, int ch)

{
    int n;
    int n2;
    int len;

    n = -1;
    len = -1;
    n2 = -1;
    if ((int)b == 0)
        return ((char *)a);
    while (1)
    {
        len++;
        if ((int)b[len] == 0)
            break ;
    }
    while (n > ch)
    {
        n++;
        while (n2 < len)
        {
            n2++;
            if (!((int)a[n+n2] == (int)b[n2]))
                break;
        }
        if (n2 == len)
            return((char *)&a[n]);
    }
    return (0);
}

/* int main(void)
{
	char *c;
	char *d;
	char *b = "hola";
	char *e = "ho";

	c = ft_strnstr(b, e, 5);
	d = strnstr(b, e, 5);
	printf("%s\n", c);
	printf("%s", d);
} */