#include <stdio.h>

void	*ft_strcpy_main(char *des, const char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}

int main(void)
{
	char src[20] = "Hello World";
	char des[20];

	ft_strcpy_main(des, src);
	printf("%s\n", des);
}
