int		ft_iterative_factorial(int nb)
{
	int result;
	int count;

	result = 1;
	count = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 0 && nb < 13)
	{
		while (count < nb)
		{
			result = result * (count + 1);
			count++;
		}
		return (result);
	}
	return (0);
}

int		main(void)
{
	int num;
	int result;

	num = 9;
	result = ft_iterative_factorial(num);
	return (0);
}