#include "unistd.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc >= 2) {
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				argv[0] = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = argv[0];
				i = 1;
				continue;
			}
			i++;
		}
		i = 1;
		while (i < argc) {
			ft_putstr(argv[i]);
			i++;
		}
	}
	else
		ft_putstr("There are not arguments!");
	return (0);
}
