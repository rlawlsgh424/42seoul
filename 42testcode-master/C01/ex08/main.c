#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	i[10] = {4, 3, 2, 1, 6, 7, 5, 8, 9, 0};
	int	j;

	j = -1;
	while (++j < 10)
		printf("%d", i[j]);
	printf("\n");
	ft_sort_int_tab(i, 10);
	j = -1;
	while (++j < 10)
		printf("%d", i[j]);
}
