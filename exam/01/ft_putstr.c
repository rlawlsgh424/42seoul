#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	i += 48;
	write(1, &i, 1);

	return (i);
}

int main(void)
{
	ft_strlen("hello");
}
