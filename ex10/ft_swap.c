void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int		main(void)
{
	int a;
	int b;

	a = 10;
	b = -6;
	ft_swap(&a, &b);
	return (0);
}
