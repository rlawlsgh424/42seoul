#include<stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	i;

	i = -5;
	while (++i < 49)
		printf("%d is prime? %d\n", i, ft_is_prime(i));
	i = 50000;
	while (++i < 50050)
		printf("%d is prime? %d\n", i, ft_is_prime(i));
	printf("%d is prime? %d\n", 0x80000000, ft_is_prime(0x80000000));
	printf("%d is prime? %d\n", 2147483629, ft_is_prime(2147483629));
	return (0);
}
