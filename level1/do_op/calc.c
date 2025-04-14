#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int	result;

		result = 0;
		if (argv[2][0] == '+')
		{
			result = atoi(argv[1]) + atoi(argv[3]);
			printf("%d\n", result);
		}
		else if (argv[2][0] == '-')
		{
			result = atoi(argv[1]) - atoi(argv[3]);
			printf("%d\n", result);
		}
		else if (argv[2][0] == '*')
		{
			result = atoi(argv[1]) * atoi(argv[3]);
			printf("%d\n", result);
		}
		else if (argv[2][0] == '/')
		{
			result = atoi(argv[1]) / atoi(argv[3]);
			printf("%d\n", result);
		}
		else if (argv[2][0] == '%')
		{
			result = atoi(argv[1]) % atoi(argv[3]);
			printf("%d\n", result);
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
