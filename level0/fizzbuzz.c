#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	posi_itoa(size_t num)
{
	size_t	num_copy = num;
	size_t	how_many_units = 1;
	while (num_copy >= 10)
	{
		num_copy = num_copy / 10;
		how_many_units = how_many_units * 10;
	}
	num_copy = num;
	ft_putchar((num_copy / how_many_units) + 48);
	while (how_many_units >= 10)
	{
		ft_putchar(((num_copy / (how_many_units / 10)) % 10) + 48);
		how_many_units = how_many_units / 10;
	}
}

int	main(void)
{
	size_t	num;

	num = 1;
	while (num <= 200)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
			write(1, "fizzbuzz", 9);
		else if (num % 3 == 0)
			write(1, "fizz", 5);
		else if (num % 5 == 0)
			write(1, "buzz", 5);
		else
			posi_itoa(num);
		num++;
		ft_putchar('\n');
	}
	return(0);
}
