#include <unistd.h>

int main(int ac, char *av[])
{
	int i;
	int len;
	
	i = 0;
	len = 0;
	while (av[1][i++])
		len++;

	while (len != 0)
		write(1, &av[1][--len],1);

	write(1, "\n", 1);
}
