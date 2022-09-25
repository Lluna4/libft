/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:07:25 by ltranca-          #+#    #+#             */
/*   Updated: 2022/09/25 15:59:38 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    int n;
    int lend;
    int lens;
    int n2;

    lend = ft_strlen(dest);
    if (!(lend < size))
        lend = size;
    lens = ft_strlen(src);
    n = lend;
    n2 = 0;
    if (lend == size)
        return (size + lens);
    if (lens < size-lend)
        ft_memcpy(dest+lend, src, lens+1);
    else
        ft_memcpy(dest+lend, src, size-lend-1);
        dest[size-1] = '\0';
    return (lend + lens); 
}

/* int main(void)
{
    char m[50] = "Holaaaaaaa";
    char *d = "buenas";
    ft_strlcat(m, d, 9);
    printf("%s", m);
} */

