/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:10:29 by ltranca-          #+#    #+#             */
/*   Updated: 2022/09/19 17:29:38 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)

{
    int n;
    char *ret;

    n = -1;
    while (s1[n] != 0)
        n++;
    ret = (char *)malloc(n  * sizeof(char));
    ft_strlcpy(ret, s1, n);
    return (ret);
}

/* int main(void)
{
    char *a;
    a = ft_strdup("hola");
    printf("%s", a);
} */