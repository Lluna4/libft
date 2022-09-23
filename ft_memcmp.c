/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:47:06 by ltranca-          #+#    #+#             */
/*   Updated: 2022/09/19 17:25:25 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *a, const void *b, size_t size)

{
    size_t n;
    char *buff;
    char *buff2;

    n = 0;
    while (n < size)
    {
        buff = (char *)a;
        buff2 = (char *)b;
        if ((int)buff[n] > (int)buff2[n])
            return ((int)buff[n] - (int)buff2[n]);
        if ((int)buff[n] < (int)buff2[n])
            return ((int)buff[n] - (int)buff2[n]);
        n++;
        }
    return (0);
}

/* int main(void)
{
    int c;

	c = ft_memcmp("holb", "hola", 4);
    printf("%d", c);
} */