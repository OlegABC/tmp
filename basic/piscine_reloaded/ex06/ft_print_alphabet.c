void	ft_putchar();

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
		ft_putchar(c++);
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}
