#include<stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	a[] = "copy test strcpy func";
	char	b[] = "aaa";

	ft_strcpy(b, a);
	printf("%s", b);
}
