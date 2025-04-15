#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject);

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (reject[i] && s[j])
	{
		while (s[j] != reject[k] && s[j] && reject[k])
			k++;
		if (s[j] && reject[k] && (s[j] == reject[k]))
			return (j);
		j++;
		i++;
		k = 0;
	}
	j = 0;
	if (j == 0 || reject[i] == '\0')
	{
		while (s[j])
			j++;
		return (j);
	}
	return (0);
}

/*
int	main(void)
{
	printf("%zu\n", ft_strcspn("ABCDEFGHi", "abcdefghijk"));
	printf("%zu\n", ft_strcspn("ijk", "abcdefghijk"));
	printf("%zu\n", ft_strcspn("", ""));
	printf("%zu\n", ft_strcspn("abcdefghij", "ABCDEFGHIJ"));
	printf("%zu\n", ft_strcspn("ABCDEFGHIJK", "abcdefghijk"));
	printf("%zu\n", ft_strcspn("i", "I"));
	printf("%zu\n", ft_strcspn("lmao", "hellolmao"));
	printf("%zu\n", ft_strcspn("-1", "ifhdh-2"));
	return (0);
}
*/
