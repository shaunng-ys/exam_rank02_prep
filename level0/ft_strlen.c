#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
int	main(void)
{
	char	*string = "This is a string of I'm not sure what length, but ft_strlen will tell me!";
	printf("%s\n\nThe length of the string above is: %d\n", string, ft_strlen(string));
	return (0);
}
*/
