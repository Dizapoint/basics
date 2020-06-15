int		ft_count_if(char **tab, int (*f)(char*))
{
	int a;
	int counter;

	a = 0;
	counter = 0;
	while (tab[a] != '\0')
	{
		if (f(tab[a]) == 1)
			counter++;
		a++;
	}
	return (counter);
}
