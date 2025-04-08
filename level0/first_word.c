#include <unistd.h>

void	ft_putchar(char c);
void	word_writer(char *string);

int	main(int argc, char *argv[])
{
	if (argc == 1)
		ft_putchar('\n');
	else
		word_writer(argv[1]);
	return(0);
}

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}



void	word_writer(char	*string)
{
	size_t	i;

	i = 0;
	while(string[i] && string[i] != 32 && (string[i] < 9 || string[i] > 13))
	{
		ft_putchar(string[i]);
		i++;
	}
	ft_putchar('\n');
}
