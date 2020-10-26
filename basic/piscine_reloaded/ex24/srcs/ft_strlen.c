#include "../includes/libft.h"

int		ft_strlen(cahr *str)
{
	return(*str ? ft_strlen(++str) + 1: 0);
}
