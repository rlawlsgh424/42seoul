/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkim2 <jkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:05:27 by jkim2             #+#    #+#             */
/*   Updated: 2021/10/26 23:01:36 by jkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_board(int	*board)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = *(board + i) + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	check(int yul, int hang, int	*board)
{
	int	i;
	int	radius;

	i = 0;
	while (i < yul)
	{
		if (board[i] >= hang)
			radius = board[i] - hang;
		else
			radius = hang - board[i];
		if (board[i] == hang || radius == yul - i)
			return (0);
		i++;
	}
	return (1);
}

void	put_queen(int yul, int *board, int *result)
{
	int	hang;

	if (yul == 10)
	{
		print_board(board);
		(*result)++;
	}
	else
	{
		hang = 0;
		while (hang < 10)
		{
			if (check(yul, hang, board))
			{
				board[yul] = hang;
				put_queen(yul + 1, board, result);
			}
			hang++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	yul;
	int	result;

	yul = 0;
	result = 0;
	put_queen(yul, board, &result);
	return (result);
}

int main(void)
{
	ft_ten_queens_puzzle();
}
