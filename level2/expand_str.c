/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 18:18:59 by shaun             #+#    #+#             */
/*   Updated: 2025/06/24 18:19:00 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}

int	skip_to_first_second(char *string)
{
	int	i;

	i = 0;
	while (is_space(string[i]) == 1)
	{
		i++;
	}
	put_char(string[i]);
	i++;
	return (i);
}

void	expand_str(char *string)
{
	int	i;

	i = skip_to_first_second(string);
	while (string[i])
	{
		if (is_space(string[i]) == 1)
			i++;
		else if (is_space(string[i]) == 0 && is_space(string[i - 1]) == 1)
		{
			put_char(' ');
			put_char(' ');
			put_char(' ');
			put_char(string[i]);
			i++;
		}
		else
		{
			put_char(string[i]);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		expand_str(argv[1]);
		put_char('\n');
	}
	else
		put_char('\n');
	return (0);
}
