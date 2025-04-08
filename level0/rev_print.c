#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		size_t	i;

		i = 0;
		while (argv[1][i])
			i++;
		while (i--)
			ft_putchar(argv[1][i]);
	}
	else
		ft_putchar('\n');
	return (0);
}
