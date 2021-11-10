#include<stdio.h>

void	ft_ft(int *nbr);

int main(void)
{
	int	*p;
	int	i;

	p = &i;
	ft_ft(p);
	printf("%d", *p);
	return (0);
}
