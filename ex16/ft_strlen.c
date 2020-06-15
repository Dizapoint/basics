int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int	main(void)
{
	int len;
	char *str = "I am no so long..";

	len = ft_strlen(str);
	return (0);
}