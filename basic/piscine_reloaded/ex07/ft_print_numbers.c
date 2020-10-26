void	ft_putchar();

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
		ft_putchar(c++);
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
