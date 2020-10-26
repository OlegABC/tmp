#include "../includes/libft.h"

void	ft_swap(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*b = *a ^ *b;
}
