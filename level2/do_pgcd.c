#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int	big;
		int	small;
		int	i;
		int	signal;

		signal = 0;
		if (atoi(argv[1]) >= atoi(argv[2]))
		{
			big = atoi(argv[1]);
			small = atoi(argv[2]);
		}
		else
		{
			big = atoi(argv[2]);
			small = atoi(argv[1]);
		}
		i = small;
		while (i && signal == 0)
		{
			if ((big % i == 0) && (small % i == 0))
			{
				printf("%d\n", i);
				signal = 1;
			}
			i--;
		}
	}
	else
		printf("\n");

	return (0);
}
