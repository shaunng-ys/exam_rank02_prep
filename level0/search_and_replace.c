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

int	main(int argc, char *argv[])
{

	size_t	i = 0;
	if (argc == 4)
	{
		if (ft_strlen(argv[1]) > 0 && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
		{	
			while (argv[1][i])
			{
				if (argv[1][i] == argv[2][0])
					ft_putchar(argv[3][0]);
				else
					ft_putchar(argv[1][i]);
				i++;
			}
			ft_putchar('\n');
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
