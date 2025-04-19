#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	size_t	i;
	size_t	trigger;

	i = 0;
	trigger = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			while(argv[1][i] != '_' && trigger == 0 && argv[1][i])
			{
				ft_putchar(argv[1][i]);
				i++;
			}
			if (argv[1][i] && argv[1][i] == '_' && trigger == 0 && argv[1][i + 1])
			{
				ft_putchar(argv[1][i + 1] - 32);
				i = i + 2;
				trigger = 1;
			}
			if (argv[1][i] == '_' && argv[1][i + 1] && trigger == 1)
			{
				i++;
				ft_putchar(argv[1][i] - 32);
				i++;
			}
			while(argv[1][i] && argv[1][i] != '_')
			{
				ft_putchar(argv[1][i]);
				i++;
			}
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
