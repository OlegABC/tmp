/*
int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
*/

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	return ((*s1 && *s2 && *s1 == *s2) ? ft_strcmp(++s1, ++s2) : (*s1 - *s2));
}

int main()
{
	printf("%d", ft_strcmp("abcde", "abcd"));
	printf("%d", ft_strcmp("abcd", "abcde"));
	printf("%d", ft_strcmp("abcd", "abce"));

}
