#include <stdlib.h>
#include <stdio.h>//FIXME

int		ft_strlen(char *str)
{
	return (*str ? ft_strlen(++str) + 1 : 0);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*res;
	int		i;

	size = ft_strlen(src);
	if (!(res = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = -1;
	while (++i < size)
		res[i] = src[i];
	res[i] = '\0';
	return (res);
}

int main(int argc, char **argv)//FIXME
{
	char *str;

	if (argc > 1)
	{
		str = ft_strdup(argv[1]);
		printf("%s\n", str);
	}
	return (0);
}
