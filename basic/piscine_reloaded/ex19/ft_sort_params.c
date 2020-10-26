#include <unistd.h>
#include <stdio.h> //FIXME

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	return (*s1 && *s2 && *s1 == *s2 ? ft_strcmp(++s1, ++s2) : *s1 - *s2);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	if (argc > 2)
	{
		i = 0;
		while (++i < argc - 1)
		{
			j = 0;
			while (++j < argc - 1)
				if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				{
					tmp = argv[j];
					argv[j]= argv[j + 1];
					argv[j + 1] = tmp;
				}
		}
	}
	i = 0;
	while (++i < argc)
		printf("%s\n", argv[i]);//FIXME
	return (0);
}
