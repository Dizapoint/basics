#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*mass;

	i = 0;
	if (min > max || max == min)
		return (NULL);
	mass = (int*)malloc(sizeof(*mass) * (max - min));
	if (!mass)
		return (NULL);
	while (min < max)
	{
		mass[i] = min;
		i++;
		min++;
	}
	return (mass);
}
