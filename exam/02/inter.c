/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkim2 <jkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 01:20:29 by jkim2             #+#    #+#             */
/*   Updated: 2021/10/29 01:34:36 by jkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_doubles(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char *av[])
{
	int i;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			i2 = 0;
			while (av[2][i])
			{
				if (av[1][i] = av[2][i])
				{
					if (check_doubles(av[1], av[1][i], i))
					{
						write(1, &av[1][i], 1);
						break;
					}
				}
				i2++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
