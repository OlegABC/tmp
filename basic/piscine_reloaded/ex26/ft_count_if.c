int		ft_count_if(char **tab, int (*f)(char*))
{
	int		i;
	int		size;

	i = -1;
	size = 0;
	while (tab[++i])
		if (f(tab[i]) == 1)
			size++;
	return (size);
}
