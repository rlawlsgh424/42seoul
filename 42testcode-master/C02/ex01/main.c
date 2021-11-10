#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	s[15] = "Hello 42seoul!";
	char	d[18] = "asdfj World!12345";

	printf("%s\n", s);
	ft_strncpy(d, s, 10);
	printf("%s", d);
}
