#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	size_t	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] > 64 && argv[1][i] < 91)
				ft_putchar(argv[1][i] + 32);
			else if (argv[1][i] > 96 && argv[1][i] < 123)
				ft_putchar(argv[1][i] - 32);
			else
				ft_putchar(argv[1][i]);
			i++;
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
