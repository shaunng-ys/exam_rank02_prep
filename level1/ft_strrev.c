#include <stdio.h>

char	*ft_strrev(char *str);

char	*ft_strrev(char *str)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	char	placeholder[i + 1];
	while (i)
	{
		placeholder[j] = str[--i];
		j++;
	}
	i = 0;
	while (i < j)
	{
		str[i] = placeholder[i];
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	string[] = "Roblox";
	printf("This is the string originally: %s\n, this is the string after strrev: %s\n", string, ft_strrev(string));
	return (0);
}
*/
