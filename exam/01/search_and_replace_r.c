/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace_r.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkim2 <jkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:49:45 by jkim2             #+#    #+#             */
/*   Updated: 2021/10/28 21:56:10 by jkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char *av[])
{
	int i;

	i = 0;
	if (ac == 4)
	{
		while (av[1][i])
		{
			if (av[2][1] == '\0' && av[3][1] == '\0')
			{
				if (av[1][i] == av[2][0])
					write(1, &av[3][0], 1);
				else
					write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}