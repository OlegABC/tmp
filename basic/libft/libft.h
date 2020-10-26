#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int		ft_atoi(const char *str);

#endif
//FIXME
/* if you need sub-functions to write a complex function, you must define these sub- functions as static as stipulated in the Norm.
To test my lib - gcc main.c -L. -lft

Because of the strictness of the moulinette, you must respect the same turn-in protocol as the libft one. All your sources and headers must be in the same folder. You can have two different folders, one for the libft and one for fillit.

Your libft.h file can contain macros and typedefs if needed.
*/
