#include <stdio.h>

int	ft_atoi(const char *str);

int	ft_atoi(const char *str)
{
	size_t	i;
	int	sign;
	long	result;
	int	final_result;


	i = 0;
	result = 0;
	final_result = 0;
	sign = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if ((str[i] == '+' || str[i] == '-') && str[i + 1] >= '0' && str[i + 1] <= '9')
	{
		if (str[i] == '+')
			sign = 1;
		else
			sign = -1;
		i++;
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = result + (str[i] - 48);
			if (str[i + 1] >= '0' && str[i + 1] <= '9')
				result = result * 10;
			i++;
		}
		result = result * sign;
	}
	else if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = result + (str[i] - 48);
			if (str[i + 1] >= '0' && str[i + 1] <= '9')
				result = result * 10;
			i++;
		}
	}
	else
		return (0);
	if (result > 2147483647 || result < -2147483648)
		return (0);
	else
	{
		final_result = result;
		return (final_result);
	}
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("         gd--2147483647"));
	return (0);
}
*/
