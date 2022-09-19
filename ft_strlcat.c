/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:07:25 by ltranca-          #+#    #+#             */
/*   Updated: 2022/09/19 17:25:25 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    int n;
    int len;
    int n2;
    int a;

    n = size - 1;
    len = -1;
    n2 = -1;
    while (1)
    {
        len++;
        if ((int)src[len] == 0)
            break ;
    }
    a = n + len;
    while (n < a)
    {
        n++;
        n2++;
        dest[n] = src[n2];
    }
    return (a);
}

/* int main(void)
{
    char m[50] = "Holaaaaaaa";
    char *d = "buenas";
    ft_strlcat(m, d, 9);
    printf("%s", m);
} */

