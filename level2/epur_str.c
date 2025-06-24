/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 11:35:46 by shaun             #+#    #+#             */
/*   Updated: 2025/06/22 11:35:48 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if((c >= 9 && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}

void put_char(char c)
{
	write(1, &c, 1);
}

void epur_str(char *string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (is_space(string[i]) == 1)
		{
			i++;
		}
		// else if (is_space(string[i + 1]) == 0)
		// {
		// 	put_char(' ');
		// 	i++;
		// 	put_char(string[i]);
		// }
		else if (is_space(string[i]) == 0)
		{
			if (is_space(string[i - 1]) == 1)
				put_char(' ');
			put_char(string[i]);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		epur_str(argv[1]);
		put_char('\n');
	}
	else
		put_char('\n');
	return (0);
}