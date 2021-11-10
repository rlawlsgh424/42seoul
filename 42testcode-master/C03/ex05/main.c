#include<stdio.h>
#include<string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int sizei);

int	main(void)
{
	char	s1[] = "Hi, ";
	char	s2[] = "Hello";
	int		i;

	i = -1;
	while (++i < 10)
	{
		printf("%d, %s\n", ft_strlcat(s1, s2, i), s1);
//		printf("%lu, %s\n", strlcat(s1, s2, i), s1);
		printf("\n");
	}
	return (0);
}
