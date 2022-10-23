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

static int *ft_pallen(char *a, char ch) // Hacer free function, hacer una funcion que cuente palabras caracteres y caracteres
{
    int   *ret;
    int   len;
    int   len2;
    int   len3;

    len = 1;
    len2 = strlen(a);
    len3 = 0;
    ret = malloc(len2 * sizeof(int) + 1);
    ret++;
    while(*a)
    {
        len3++;
        if (*a == ch)
        {
            if (len3 <= 1)
            {
                while (*a == ch)
                    a++;
                len3 = 0;
                continue ;
            }
            len++;
            a--;
            len3 = 0;
            *ret = len3;
            ret++;
        }
        a++;
    }
    len++;
    a--;
    len3 = 0;
    *ret = len3;
    ret++;
    ret = ret - len;
    *ret = len;
    return (ret);
}

char ** ft_split (char const *s, char c)
{
    char **ret;
    char *buff;
    int *n;
    int pointer;

    if (!s || !c)
        return (NULL);
    n = ft_pallen(s, c);
    pointer = -1;
    ret = calloc(n[0] + 1, sizeof (char *));
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