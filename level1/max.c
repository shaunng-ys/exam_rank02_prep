#include <stdio.h>

int	max(int* tab, unsigned int len);

int	max(int* tab, unsigned int len)
{
	size_t	i;
	size_t	follower;
	int	update;

	i = 0;
	follower = 0;
	update = -2147483648;
	while (follower < len)
	{
		if (tab[i] > update)
			update = tab[i];
		i++;
		follower++;
	}
	if (follower == 0)
		return (0);
	else
		return (update);
}

/*
int	main(void)
{
	int	tab[5] = {1999999, 200, 3, 454545, 5};
	int	*tab_pointer = tab;
	printf("This is the largest int in the integer array: %d\n", max(tab_pointer, 5));
	return (0);
}
*/
