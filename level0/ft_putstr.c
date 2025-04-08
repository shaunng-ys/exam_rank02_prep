#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i++]);	
	}
}

/*
int	main(void)
{
	ft_putstr("This is a string");
	return (0);
}
*/
