#include<unistd.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	c0[] = "Coucou\ntu vas b\tien ?";
	char	c1[] = "Coucou\x7ftu vas b\x8eien ?";
	char	c2[] = "Coucou\x11tu vas b\xafien ?";
	
	ft_putstr_non_printable(c0);
	write(1, "\n", 1);
	ft_putstr_non_printable(c1);
	write(1, "\n", 1);
	ft_putstr_non_printable(c2);
}

