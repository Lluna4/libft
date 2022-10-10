/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:56:12 by ltranca-          #+#    #+#             */
/*   Updated: 2022/10/10 18:41:13 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    char *backpointer;
    char *buff;
    char *backbuff;
    char *ret;
    int n;
    
    backpointer = &s1[ft_strlen(s1) - 1];
    while (*s1)
    {
        n = -1;
        buff = s1;
        backbuff = backpointer;
        while (*set)
        {
            n++;
            if (*s1 == *set || *backpointer == *set)
            {
                if (*s1 == *set)
                    s1++;
                else 
                    backpointer--;
                break; 
            }
            set++;
        }
        if (!(*set))
            break;
        set = set - n;
    } 
    ret = ft_calloc(ft_strlen(&s1), sizeof(char));
    //hacer la parte que crea el print porfavor
    return(ret);
}