#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

size_t	ft_strlen(char *string)
{
	size_t	i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

/*
size_t	string_checker(char *string, char)
{
	size_t	i;

	i = 0;
	while (string[i])
	{
		if (string[i] == char)
			return (1);
	}
	return (0);
}
*/

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		size_t	i;
		size_t	j;
		size_t	counter;
		char	storage[ft_strlen(argv[1]) + 1];

		i = 0;
		j = 0;
		counter = 0;
		while (i < ft_strlen(argv[1]) + 1)
			storage[i++] = '\0';
		i = 0;
		while (argv[1][i])
		{
			while ((argv[2][j] != argv[1][i]) && argv[2][j])
				j++;
			if (argv[2][j] == argv[1][i])
				storage[counter++] = argv[1][i];
			i++;
		}
		i = 0;
		while ((argv[1][i] == storage[i]) && argv[1][i] && storage[i])
			i++;
		if (i == ft_strlen(argv[1]))
		{
			i = 0;
			while (storage[i])
				ft_putchar(storage[i++]);
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
