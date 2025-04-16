#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2);

char	*ft_strpbrk(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[j])
	{
		while (s2[i])
		{
			if (s1[j] == s2[i])
				return (((char *)s1 + j));
			else
				i++;
		}
		i = 0;
		j++;
	}
	return (NULL);
}

int	main(void)
{
	printf("This is what the pointer is pointing to:\n%s\n", ft_strpbrk("zzzzzzzzza", "Don't mind me That"));
	return (0);
}
