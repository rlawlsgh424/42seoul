#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	i[5] = {0, 2, 5, 3, 1};
	int	j;

	j = -1;
	while (++j < 5)
		printf("%d", i[j]);
	printf("\n");
	ft_rev_int_tab(i, 5);
	j = -1;
	while (++j < 5)
		printf("%d", i[j]);
}
