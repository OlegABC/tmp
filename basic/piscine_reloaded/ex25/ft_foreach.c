 
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int		i;

	if (length < 0 && tab)
		length = - length;
	i = -1;
	while (++i < length)
		f(tab[i]);
}
