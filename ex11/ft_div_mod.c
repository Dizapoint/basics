void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int		main(void)
{
	int a = 16;
	int b = 10;
	int	div_res;
	int mod_res;

	ft_div_mod(a, b, &div_res, &mod_res);
	return (0);
}
