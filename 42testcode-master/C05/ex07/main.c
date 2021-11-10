#include<stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("%d, %d, %d, %d, %d, %d, %d\n",
			ft_find_next_prime(-1),
			ft_find_next_prime(0),
			ft_find_next_prime(5),
			ft_find_next_prime(8),
			ft_find_next_prime(9),
			ft_find_next_prime(17),
			ft_find_next_prime(101));
	return (0);
}
