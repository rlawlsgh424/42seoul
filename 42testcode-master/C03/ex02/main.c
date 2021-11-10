#include<stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	s1[] = "asdf";
	char	s2[] = "Hello";

	ft_strcat(s1, s2);
	printf("%s", s1);
	return (0);
}
