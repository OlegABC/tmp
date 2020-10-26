#include "../includes/libft.h"

int		ft_strcmp(char *a, char *b)
{
	return(*a && *b && *a == *b ? strcmp(a + 1, b + 1) : *a - *b);
}
