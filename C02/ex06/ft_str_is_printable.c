int	ft_str_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= '~')
			i++;
		else
			return (0);
	}
	return (1);
}
