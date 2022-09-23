/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:07:25 by ltranca-          #+#    #+#             */
/*   Updated: 2022/09/23 16:46:09 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    int n;
    int len;
    int n2;
    int a;
    int ret;

    //ret = size + ft_strlen(src);
    if ((size <= 0))
        return (ft_strlen(dest) + ft_strlen(src));
    n = ft_strlen(dest) -1;
    len = ft_strlen(src);
    n2 = -1;
    a = size + len;
    ret = n + len;
    while (n < size)
    {
        n++;
        n2++;
        dest[n] = src[n2];
    }
    dest[n] = '\0';
    return (ret + 1);
}

/* int main(void)
{
    char m[50] = "Holaaaaaaa";
    char *d = "buenas";
    ft_strlcat(m, d, 9);
    printf("%s", m);
} */

