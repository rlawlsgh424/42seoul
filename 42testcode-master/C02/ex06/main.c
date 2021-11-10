#include<stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	c[] = "asdf";

	printf("%d", ft_str_is_printable(c));
}
