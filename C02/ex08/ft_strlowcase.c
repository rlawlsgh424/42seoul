char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	whlie (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[[i] = str[i] + 32;
		i++;
	}
	return (str);
}
