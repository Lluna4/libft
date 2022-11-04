/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:17:15 by ltranca-          #+#    #+#             */
/*   Updated: 2022/10/31 18:19:01 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_wordcount(char *a, char ch)
{
    int n;
    
    n = 1;
    while (*a) //arreglar wordcount con caracteres separadores a final
    {
        if (*a == ch)
        {
            n++;
            while (*a == ch)
                a++;
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
        if (*a == '\0')
            break ;
        len++;
        a++;
    }
    return (len);
}

void ft_freeall(char **s)
{
    int n;

    n = -1;
    while (*s)
    {
        s++;
        free(*s);
    }
}

char ** ft_split (char const *s, char c) //casi casi funciona haz que freeall funcione y que todo de bien sobretodo con separadores al final
{
    char **ret;
    int n;
    int pointer;

    if (!s || !c)
        return (NULL);
    while (*s == c && *s)
      s++;
    n = ft_wordcount(s, c);
    ret = ft_calloc(n + 1, sizeof(char *));
    if (!ret)
        return ("\0");
    pointer = -1;
    while (*s)
    {
        while (*s == c && *s)
          s++;
        n = ft_charcount(s, c);
        if (n <= 0)
        {
            //freeall
            if (*s == '\0')
            {
                break ;
            }
            else
                return 0;
        }
        pointer++;
        ret[pointer] = ft_substr(s, 0, n);
        s = s + n;
    }
    return (ret);
}