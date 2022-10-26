/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:17:15 by ltranca-          #+#    #+#             */
/*   Updated: 2022/10/27 00:58:01 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_wordcount(char *a, char ch)
{
    int n;
    
    n = 1;
    while (*a)
    {
        if (*a == ch)
        {
            n++;
            a = ft_strtrim(a, ch);
        }
        a++;
    }
    return (n);
}

static int ft_charcount(char *a, char ch)
{
    int len;

    len = 0;
    while (*a != ch)
    {
        len++;
        a++;
    }
    return (len);
}

char ** ft_split (char const *s, char c) //adaptar split a las nuevas funciones
{
    char **ret;
    char *buff;
    int n;
    int pointer;

    if (!s || !c)
        return (NULL);
    n = ft_wordcount(s, c);
    pointer = -1;
    ret = calloc(n + 1, sizeof (char *));
    n++;
    if (!ret)
        return (NULL);
    while (*s)
    {
        while (*s == c && *s)
            s++;
        pointer++;
        ret[pointer] = ft_substr(s, 0, *n);
        n++;
        s = s + *n;
    }
    return(ret);
}
