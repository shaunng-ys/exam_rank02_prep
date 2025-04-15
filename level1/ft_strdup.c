#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src);

char	*ft_strdup(char *src)
{
	char *dest;
	size_t	i;

	i = 0;
	while (src[i])
		i++;
	dest = malloc(i + 1);
	i = 0;
	if (dest == NULL)
		return (NULL);
	else
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
}

/*
int	main(void)
{
	char *src = "This is a string";
	char *dest;
	dest = ft_strdup(src);
	printf("This is src: %s, and this is dest: %s\n", src, dest);
	return (0);
}
*/
