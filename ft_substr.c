/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 17:59:22 by ltranca-          #+#    #+#             */
/*   Updated: 2022/09/23 19:05:37 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int a;
    int b;
    static char *l;
    
    a = -1;
    l = (char *)malloc(len - 1);
    if (!l)
        return(0);
    if (ft_strlen(s) <= 0)
        free(l);
        return("");
    start = start - 1;
    while (a < len)
    {
        a++;
        start++;
        l[a] = s[start];
    }
    
    return (l);
}

/*
int main(void)
{
    printf("%s", ft_substr("hola", 2, 4));
}*/