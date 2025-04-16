#include <string.h>
#include <stdio.h>


int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	diff;
	size_t	i;

	diff = 0;
	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			if (diff < 0)
				return (-1);
			else if (diff == 0)
				return (0);
			else
				return (1);
		}
		i++;
	}
	if (s1[i] || s2[i])
	{
		diff = s1[i] - s2[i];
		if (diff < 0)
			return (-1);
		else if (diff == 0)
			return (0);
		else
			return (1);
	}
	return (0);
}

/*
int	main(void)
{
	printf("This is the difference between the first different character between the two strings: %d\n", strcmp("z", "a"));
	printf("This is the difference between the first different character between the two strings: %d\n", strcmp("This is a string", "This is a kernel"));
	printf("This is the difference between the first different character between the two strings: %d\n", strcmp("This is a string", "This is a fiddle"));
	printf("This is the difference between the first different character between the two strings: %d\n", strcmp("This is a string", "This is a pain"));
	printf("This is the difference between the first different character between the two strings: %d\n", strcmp("This is a string", "This is a 100"));
	printf("This is the difference between the first different character between the two strings: %d\n", strcmp("This is a string", "This is 3000"));
	printf("This is the difference between the first different character between the two strings: %d\n", strcmp("", ""));
	printf("This is the difference between the first different character between the two strings: %d\n", strcmp("This is a string", "Game"));
	return (0);
}

int	main(void)
{
	printf("This is the difference between the first different character between the two strings: %d\n", ft_strcmp("z", "a"));
	printf("This is the difference between the first different character between the two strings: %d\n", ft_strcmp("This is a string", "This is a kernel"));
	printf("This is the difference between the first different character between the two strings: %d\n", ft_strcmp("This is a string", "This is a fiddle"));
	printf("This is the difference between the first different character between the two strings: %d\n", ft_strcmp("This is a string", "This is a pain"));
	printf("This is the difference between the first different character between the two strings: %d\n", ft_strcmp("This is a string", "This is a 100"));
	printf("This is the difference between the first different character between the two strings: %d\n", ft_strcmp("This is a string", "This is 3000"));
	printf("This is the difference between the first different character between the two strings: %d\n", ft_strcmp("This is a string", ""));
	printf("This is the difference between the first different character between the two strings: %d\n", ft_strcmp("This is a string", "Game"));
	return (0);
}

int	main(void)
{
	printf("This is the difference between the first different character between the two strings: %d\n", ft_strcmp("This is a string", "This is a corn"));
	printf("This is the difference between the first different character between the two strings: %d\n", ft_strcmp("This is a string", "This is a kernel"));
	printf("This is the difference between the first different character between the two strings: %d\n", ft_strcmp("This is a string", "This is a fiddle"));
	printf("This is the difference between the first different character between the two strings: %d\n", ft_strcmp("This is a string", "This is a pain"));
	printf("This is the difference between the first different character between the two strings: %d\n", ft_strcmp("This is a string", "This is a 100"));
	printf("This is the difference between the first different character between the two strings: %d\n", ft_strcmp("This is a string", "This is 3000"));
	printf("This is the difference between the first different character between the two strings: %d\n", ft_strcmp("This is a string", ""));
	printf("This is the difference between the first different character between the two strings: %d\n", ft_strcmp("This is a string", "Game"));
	return (0);
}
*/
