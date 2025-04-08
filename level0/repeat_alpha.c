#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat_alpha(char *string)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (string[i])
	{
		if (string[i] > 64 && string[i] < 91)
		{
			counter = string[i] - 64;
			while (counter > 0)
			{
				ft_putchar(string[i]);
				counter--;
			}
		}
		else if (string[i] > 96 && string[i] < 123)
		{
			counter = string[i] - 96;
			while (counter > 0)
			{
				ft_putchar(string[i]);
				counter--;
			}
		}
		else
		{
			ft_putchar(string[i]);
		}
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		ft_putchar('\n');
	else
		repeat_alpha(argv[1]);
	return (0);
}
