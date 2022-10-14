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

static int *ft_pallen(char *a, char ch)
{
    size_t  len;
    char    *pch;
    int     *pallen; 
    char    *b;
    int     len2;
    
    pallen = malloc(50 * sizeof(int));
    len = 1;
    len2 = 0;
    pch = &ch;
    pallen++;
    while (*a)
    {
        b = a;
        len2++;
        if (*a == ch)
        {
            *pallen = len2;
            len++;
            a++;
            a = ft_strtrim(a, " ");
            len2 = ft_strlen(b) - ft_strlen(a) - 1;
            pallen++;
        }
        a++;
    }
    pallen = pallen - len;
    pallen[0] = len;
    return (pallen);
}

char **ft_split(char const *s, char c)
{
    char **ret;
    char *buff;
    int *n;
    int pointer;
    
    if (!s || !c)
        return ("\0");
    n = ft_pallen(s, c);
    n++;
    pointer = -1;
    s = ft_strtrim(s, " ");
    ret = ft_calloc(ft_pallen(s, c)[0] + 1, sizeof(char *));
    if (!ret)
        return ("\0");
    while (*s)
    {
        if (*s == c)
        {
            pointer++;
            s = s - *n;
            ret[pointer] = ft_substr(s, 0, *n);
            s = s + *n + 1;
            n = 0;
            s = ft_strtrim(s, " ");
            n++;
        }
        s++;
    }
    pointer++;
    s = s - *n;
    ret[pointer] = ft_substr(s, 0, *n);
    s = s + *n + 1;
    n = 0;
    return (ret);
}

