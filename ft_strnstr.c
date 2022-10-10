/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:07:50 by ltranca-          #+#    #+#             */
/*   Updated: 2022/10/10 18:37:48 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *a, const char *b, size_t size) //strchr pero con mas de un caracter

{
    int n;
    int n2;
    int n3;
    int n4;
    char *buff;
    
    buff = ft_memchr(a, b[0], size); 
    n = 0;
    n2 = ft_strlen(b);
    n4 = ft_strlen(a);
    if (b[0] == '\0' || ft_strncmp(a, b, ft_strlen(b)) == 0)
      return(a);
    while (n < size)
    {
      if (!buff)
        return(0);
      if (a == '\0')
        break;
      n3 = 0;
      while (*b != '\0' || *a != '\0')
      {
          if (*b != *a)
              break;
          b++;
          a++;
          n3++;
      }
       if (n3 > size || n4 - ft_strlen(a) >= size)
        break;
       if (*b == '\0')
        return (a - n2);
       b = b - n3;
       a = a - n3;
       a++;
       buff = ft_memchr(a, b[0], size);
       n++;
    }
    return (0);
}

/*
int main(void)
{
	char *c;
	char *d;
	char *b = "hola";
	char *e = "ho";

	c = ft_strnstr(b, e, 5);
	d = strnstr(b, e, 5);
	printf("%s\n", c);
	printf("%s", d);
} */