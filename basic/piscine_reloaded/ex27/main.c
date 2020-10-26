#include "ft_display_file.h"

int		ft_strlen(char *str)
{
	return (*str ? ft_strlen(++str) + 1 : 0);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int		read_file(int fd)
{
	int		a;
	char	buf[BUF_SIZE + 1];

	while ((a = read(fd, buf, BUF_SIZE)))
	{
		if (a == -1)
			return (1);
		buf[a] = '\0';
		write(1, buf, a);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		fd;

	if (argc == 2)
	{
		if ((fd = open(argv[1], O_RDONLY)) == -1)
		{
			ft_putstr("Error open file.\n");
			return (1);
		}
		if (read_file(fd))
			ft_putstr("Error reading file.\n");
		if (close(fd) == -1)
			ft_putstr("Error close file.\n");
	}
	else if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	return (0);
}
