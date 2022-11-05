#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *ret;
    unsigned int index;

    ret = ft_calloc(ft_strlen(s) + 1, sizeof(char));
    if (!ret)
        return (NULL);
    index = 0;
    while (ft_strlen(s) > index)
    {
        ret[index] = f(index, s[index]);
        index++;
    }
    ret[index] = '\0';
    return (ret);
}

