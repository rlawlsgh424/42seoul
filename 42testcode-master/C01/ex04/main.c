#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 23;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d", a, b);
}
