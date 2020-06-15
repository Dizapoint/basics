#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int		file;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (argc != 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	file = open(argv[1], O_RDONLY);
	if (file == -1)
		ft_putstr("Open error.\n");
	ret = read(file, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf);
	return (0);
}
