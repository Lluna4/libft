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

#include "libft.h"

static size_t  ft_pallen(char *a, char ch)
{
    size_t len;
    
    len = 1;
    while (*a)
    {
        if (*a == ch)
        {
            len++;
            a++;
            ft_strtrim(a, " ");
        }
        a++;
    }
    return (len);
}

char **ft_split(char const *s, char c)
{
    char **ret;
    char *buff;
    int n;
    int pointer;
    
    if (!s || !c)
        return ("\0");
    n = -1;
    pointer = -1;
    s = ft_strtrim(s, " ");
    ret = ft_calloc(ft_pallen(s, c) + 1, sizeof(char *));
    if (!ret)
        return ("\0");
    while (*s)
    {
        n++;
        if (*s == c)
        {
            pointer++;
            s = s - n;
            ret[pointer] = ft_substr(s, 0, n);
            s = s + n + 1;
            n = 0;
            s = ft_strtrim(s, " ");
        }
        s++;
    }
    n++;
    pointer++;
    s = s - n;
    ret[pointer] = ft_substr(s, 0, n);
    s = s + n + 1;
    n = 0;
    return (ret);
}

