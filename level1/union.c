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

size_t	array_checker(char *array, int	character)
{
	size_t	i;

	i = 0;
	while (array[i])
	{
		if (array[i] == character)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		size_t	len;
		size_t	i;
		size_t	counter;

		len = ft_strlen(argv[1]) + ft_strlen(argv[2]);
		i = 0;
		counter = 0;
		char	storage[len];
		while (i < len)
			storage[i++] = '\0';
		i = 0;
		while (argv[1][i])
		{
			if (array_checker(storage, argv[1][i]) == 0)
				storage[counter++] = argv[1][i];
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (array_checker(storage, argv[2][i]) == 0)
				storage[counter++] = argv[2][i];
			i++;
		}
		i = 0;
		while (storage[i])
		{
			ft_putchar(storage[i]);
			i++;
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
