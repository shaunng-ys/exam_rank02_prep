#include <string.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept);

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;
	size_t	sign;

	i = 0;
	j = 0;
	sign = 0;
	while (s[i])
	{
		while (accept[j] && sign == 0)
		{
			if (s[i] == accept[j])
				sign = 1;
			j++;
		}
		if (sign == 0)
			return (i);
		if (sign == 1)
			sign = 0;
		j = 0;
		i++;
	}
	return (i);
}

/*
int	main(void)
{
	char	*s = "A bombshell piece of news";
	char	*accept = "A bombshell piece of news";
	printf("This is the index of the character in string s where it doesn't appear in string accept: %zu\n", ft_strspn(s, accept));
	return (0);
}
*/

