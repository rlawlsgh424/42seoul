#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 23;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("%d, %d, %d, %d", a, b, div, mod);
}
