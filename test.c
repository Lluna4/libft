#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *a, const char *b, int ch)

{
    while (ch != 0) 
    {
        if (*((unsigned char *)a) != *((unsigned char *)b))
            return (*((unsigned char *)a) - *((unsigned char *)b));
        a++;
		b++;
		ch--;
    }
    return (0);
}

int main(void)
{
	int c;
	int d;
	char *b = "abc";
	char *e = "abc";

	c = ft_strncmp(b, e, 7);
	d = strncmp(b, e, 7);
	printf("%d\n", c);
	printf("%d", d);
}