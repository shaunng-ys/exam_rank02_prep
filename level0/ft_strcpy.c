#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2);

char	*ft_strcpy(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/*
int	main(void)
{
	char	empty_string[17];
	char	string1[17] = "This is a string";
	printf("This is the output: %s\n", ft_strcpy(empty_string, string1));
	return (0);
}
*/
