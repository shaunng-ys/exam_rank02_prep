#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	size_t	i;
	int	alpha;
	size_t	decrementer;

	i = 0;
	decrementer = 25;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				alpha = argv[1][i];
				while (alpha != 'Z')
				{
					alpha++;
					decrementer--;
				}
				ft_putchar(argv[1][i] + 25 - (decrementer * 2));
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				alpha = argv[1][i];
				while (alpha != 'z')
				{
					alpha++;
					decrementer--;
				}
				ft_putchar(argv[1][i] + 25 - (decrementer * 2));
			}
			else
				ft_putchar(argv[1][i]);
			i++;
			decrementer = 25;
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
