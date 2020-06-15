int		ft_sqrt(int nb)
{
	int result;

	result = 1;
	if (nb < 0 || nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (result != nb / result && result * result < nb)
		result++;
	if (nb == result * result)
		return (result);
	return (0);
}

int		main(void)
{
	int nb;
	int result;

	nb = 49;
	result = ft_sqrt(nb);
	return (0);
}
