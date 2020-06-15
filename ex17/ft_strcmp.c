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

int		main(void)
{
	int result1;
	int result2;
	int result3;
	char *str1 = "Good string!";
	char *str2 = "Good string, too!";
	char *str3 = "Good string!";

	result1 = ft_strcmp(char *str1, char *str2);
	result2 = ft_strcmp(char *str1, char *str3);
	result3 = ft_strcmp(char *str2, char *str3);
	return (0);
}
