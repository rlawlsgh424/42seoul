void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char	c[] = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n \0 asdf\xff\x87";

	ft_print_memory(c, 99);
}
