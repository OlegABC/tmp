#include "libft.h"

int		atoi(const char *str)
{
	int		i;
	int		sign;
	int		num;

	num = 0;
	sign = 1;
	i = -1;
	while ((str[++i] >= 9 && str[i] <= 13) || str[i] == ' ');
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num * sign);
}
