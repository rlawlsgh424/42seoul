#include<stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int	i;

	i = -3;
	while (++i < 10)
	{
		printf("%d, ", ft_fibonacci(i));
	}
}
