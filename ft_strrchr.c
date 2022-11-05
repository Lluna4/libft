/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:35:56 by ltranca-          #+#    #+#             */
/*   Updated: 2022/09/19 17:25:25 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *a, int ch)

{
    char *ret;

    ret = 0;
    while (*a)
    {
        if (*a == ch)
            ret = (char *)a;
        a++;
    }
    if (ch == 0)
        return ((char *)a);
    return (ret);
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