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

    n = ft_strlen(s1);
    ret = malloc(n + 1);
    ft_strlcpy(ret, s1, n);
    return (ret);
}

/* int main(void)
{
    char *a;
    a = ft_strdup("hola");
    printf("%s", a);
} */
