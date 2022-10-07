#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)

{
	char    *ret;
	int     n;

	n = -1;
	if (s1[0] == '\0' && s2[0] == '\0')
		return ("");
	ret = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!ret)
		return (0);
	while (*s1 != '\0')
	{
		n++;
		ret[n] = *s1;
		s1++;
	}
	while (*s2 != '\0')
	{
		n++;
		ret[n] = *s2;
		s2++;
	}
	return (ret);
}