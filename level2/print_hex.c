// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// size_t	ft_strlen(char *string)
// {
// 	int	i;

// 	i = 0;
// 	while (string[i])
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// int	ft_putnbr_base(unsigned long nbr, char *base, int *digit_counter, size_t itr)
// {
// 	size_t	counter;
// 	unsigned long	num;

// 	num = nbr;
// 	counter = ft_strlen(base);
// 	if (itr > 0)
// 	{
// 		ft_putnbr_base(num / counter, base, digit_counter, --itr);
// 		(*digit_counter)++;
// 		ft_putchar((base[num % counter]));
// 	}
// 	return ((*digit_counter));
// }

// int	main(void)
// {
// 	if (argc == 2)
// 	{
// 		while ()
// 	}
// }
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// void	ft_putstring(char *string)
// {
// 	int	i;

// 	i = 0;
// 	while (string[i])
// 	{
// 		ft_putchar(string[i]);
// 		i++;
// 	}
// }

void	print_hex(int nbr)
{
	char	*hex_digits;
	int		nbr_cpy;
	int		i;
	char	string[20];

	hex_digits = "0123456789ABCDEF";
	nbr_cpy = nbr;
	i = 0;
	while (i < 20)
	{
		string[i] = 0;
		i++;
	}
	i = 0;
	while ((nbr_cpy / 16) > 0)
	{
		string[i] = hex_digits[nbr_cpy % 16];
		nbr_cpy = nbr_cpy / 16;
		i++;
	}
	string[i] = hex_digits[nbr_cpy % 16];
	//printf("%s\n", string);
	while (i != 0)
	{
		ft_putchar(string[i]);
		i--;
	}
	ft_putchar(string[0]);
}

int	ft_atoi(char *string)
{
	int				i;
	int				tally;

	i = 0;
	tally = 0;
	while (string[i])
	{
		if (i == 0)
			tally = string[i] - 48;
		else if (string[i] >= '0' && string[i] <= '9')
			tally = ((tally * 10) + (string[i] - 48));
		i++;
	}
	return (tally);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		print_hex(ft_atoi(argv[1]));
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}