#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int index;

    index = 0;
    while (ft_strlen(s) > 0)
    {
        f(index, &*s);
        s++;
        index++;
    }
}
