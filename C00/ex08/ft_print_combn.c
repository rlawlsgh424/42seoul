/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:33:15 by jseo              #+#    #+#             */
/*   Updated: 2021/10/14 10:43:45 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_combn(int n, int holders [])
{
	int		i;
	bool	ftbool;

	i = 0;
	while (i < n)
	{
		ft_putchar(48 + holders[i]);
		i++;
	}
	i = n - 1;
	ftbool = 1;
	while (i >= 0)
	{
		if (holders[i] != 9 - (n - 1 - i))
		{
			ftbool = 0;
			break ;
		}
		i--;
	}
	if (!ftbool)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn_recursive(int n, int curr, int holders[], int st_index)
{
	int	i;
	int	max;

	if (curr == n)
	{
		ft_write_combn(n, holders);
	}
	else
	{
		max = 10 - (n - curr);
		i = st_index + 1;
		while (i <= max)
		{
			holders[curr] = i;
			ft_print_combn_recursive(n, curr + 1, holders, i);
			i++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	holders[10];
	int	i;

	i = 0;
	while (i < n)
	{
		holders[i] = 0;
		i++;
	}
	ft_print_combn_recursive(n, 0, holders, -1);
}
