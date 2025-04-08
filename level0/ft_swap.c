#include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	placeholder = *a;

	*a = *b;
	*b = placeholder;
}

/*
int	main(void)
{
	int	one = 77;
	int	two = 88;
	int	*a = &one;
	int	*b = &two;

	printf("These are the original values of integer one and two respectively: %d, %d\n", one, two);
	ft_swap(a, b);
	printf("These are the values of integer one and two respectively (after being swapped): %d, %d\n", one, two);
	return (0);
}
*/
