/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:17:15 by ltranca-          #+#    #+#             */
/*   Updated: 2022/10/12 18:26:58 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "libft.h"

static int *ft_pallen(char *a, char ch)
{
    int   *ret;
    int   len;
    int   len2;

    len = 1;
    len2 = -1;
    while(*a)
    {
        len2++;
        if (*a == ch)
        {
            if (len <= 1)
            {
                continue ;
            }
            len++;
        }
    }
}*/

/*
char ** ft_split (char const *s, char c)
{
    char **ret;
    char *buff;
    int *n;
    int pointer;
    char *pch;

    pch = &c;
    if (!s || !c)
        return (NULL);
    n = ft_pallen(s, c);
    pointer = -1;
    ret = ft_calloc(n[0] + 1, sizeof (char *));
    n++;
    if (!ret)
        return (NULL);
    while (*s)
    {
        while (*s == c && *s)
        {
            s++;
        }
        pointer++;
        ret[pointer] = ft_substr(s, 0, *n);
        s = s + *n;
        n++;
    }
    return(ret);
}*/