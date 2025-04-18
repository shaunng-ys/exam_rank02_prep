#include <unistd.h>

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

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		size_t	i = 0;
		size_t	j = 0;
		size_t	sign1 = 0;
		size_t	sign2 = 0;
		size_t	counter = 0;
		size_t	length1 = ft_strlen(argv[1]);
		size_t	length2 = ft_strlen(argv[2]);
		size_t	ultimate_length = length1 + length2;
		char	collector[ultimate_length + 1];
		while (i <= ultimate_length)
		{
			collector[i] = '\0';
			i++;
		}
		i = 0;
		while (argv[1][i])
		{
			while (argv[2][j] && sign1 == 0)
			{
				if (argv[1][i] == argv[2][j])
				{
					sign1 = 1;
				}
				j++;
			}
			j = 0;
			if (sign1 == 1)
			{
				while (j < ultimate_length && sign2 == 0)
				{
					if (argv[1][i] == collector[j])
						sign2 = 1;
					j++;
				}
				j = 0;
				if (sign2 == 0)
				{
					collector[counter] = argv[1][i];
					counter++;
				}
			}
			sign1 = 0;
			sign2 = 0;
			i++;
		}
		while (collector[j])
		{
			ft_putchar(collector[j]);
			j++;
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
