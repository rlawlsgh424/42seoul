#include<stdio.h>
#include<string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src[50] = "Hello World!";
	char	dest[10] = "qwerfzxcv";

	printf("%s", dest);
	printf(" %d", ft_strlcpy(dest, src, 5));
	printf(" %s\n", dest);
	
	char	s[50] = "Hello World!";
	char	d[10] = "qwerfzxcv";
	
	printf("%s", d);
	printf(" %lu", strlcpy(d, s, 5));
	printf(" %s\n", d);
}
