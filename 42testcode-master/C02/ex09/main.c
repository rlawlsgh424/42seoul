#include<stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	c[] = "salut, commEnt tu vas ? 42mots quarANTe-Deux; cinquate+et+un";

	printf("%s", ft_strcapitalize(c));
}
