#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end);

int	*ft_range(int start, int end)
{
	size_t	array_size;
	size_t	i;
	int	start_cpy;
	int	end_cpy;
	int	*range;

	array_size = 0;
	i = 0;
	start_cpy = start;
	end_cpy = end;
	while (start_cpy <= end_cpy || start_cpy > end_cpy)
	{
		if (start_cpy < end_cpy)
			start_cpy++;
		else if (start_cpy > end_cpy)
			start_cpy--;
		else
		{
			array_size++;
			break;
		}
		array_size++;
	}
	range = malloc((array_size) * sizeof(int));
	while (start < end || start > end)
	{
		if (start_cpy > start)
			range[i] = start++;
		else if (start_cpy < start)
			range[i] = start--;
		i++;
	}
	if (start == end)
		range[i] = start;
	return (range);
}

int	main(void)
{
	int	*ptr;
	size_t	i;
	int	j;
	int	k;
	
	i = 0;
	j = -3;
	k = 0;
	ptr = ft_range(j, k);
	if (j <= k)
	{
		while (j <= k)
		{
			printf("This is the value of int rn: %d\n", ptr[i]);
			i++;
			j++;
		}
	}
	else if (j > k)
	{
		while (j >= k)
		{
			printf("This is the value of int rn: %d\n", ptr[i]);
			i++;
			j--;
		}
	}
	return (0);

}

