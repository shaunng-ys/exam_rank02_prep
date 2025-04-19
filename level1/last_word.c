#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		size_t	i = 0;
		while (argv[1][i])
			i++;
		i--;
		printf("This is i at one = %zu\n", i);
		while (i > 0 && ((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32))
			i--;
		printf("This is i at two = %zu\n", i);
		while (i > 0 && !((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32))
			i--;
		if (i > 0 && ((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32))
			i++;
		printf("This is i at three = %zu\n", i);
		while (!(argv[1][i] >= 9 && argv[1][i] <= 13) && !(argv[1][i] == 32) && argv[1][i])
		{
			ft_putchar(argv[1][i]);
			i++;
		}
		printf("This is i at four = %zu\n", i);
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
