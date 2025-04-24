#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

size_t	isPrime(unsigned int n)
{
	size_t	i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

unsigned int	ft_posatoi(char *string)
{
	if (string[0] == '-')
		return (0);
	int	i;
	size_t	ten;
	size_t	total;

	i = 0;
	ten = 1;
	total = 0;
	while (string[i])
		i++;
	i--;
	while (i >= 0)
	{
		total = (string[i] - '0') * ten + total;
		//printf("This is total now: %zu\n", total);
		ten = ten * 10;
		i--;
	}
	return (total);
}

void	ft_putnbr(unsigned int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar((n % 10 + '0'));
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		unsigned int	num_copy;
		unsigned int	total;
		num_copy = ft_posatoi(argv[1]);
		total = 0;
		while (num_copy > 1)
		{
			if (isPrime(num_copy) == 1)
				total = total + num_copy;
			num_copy--;
		}
		ft_putnbr(total);
		ft_putchar('\n');
	}
	else if (argc != 2 || ft_posatoi(argv[1]) < 1)
	{
		ft_putchar('0');
		ft_putchar('\n');
	}
	return (0);
}
