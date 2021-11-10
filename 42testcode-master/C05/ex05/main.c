#include<stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	i;

	i = -5;
	while (++i < 100)
		printf("%d\n", ft_sqrt(i));
	printf("%d\n", ft_sqrt(0xFFFFFFFF));
	printf("%d\n", ft_sqrt(2147395600));
	return (0);
}
