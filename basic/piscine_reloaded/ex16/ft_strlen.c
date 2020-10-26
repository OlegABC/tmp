#include <stdio.h>

int		ft_strlen(char *str)
{
	return (*str ? ft_strlen(++str) + 1 : 0);
}

int	main(void)
{
	printf("%d", ft_strlen("abcd"));
}
