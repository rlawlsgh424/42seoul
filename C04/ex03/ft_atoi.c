/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkim2 <jkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:07:42 by jkim2             #+#    #+#             */
/*   Updated: 2021/10/19 19:21:24 by jkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	revert;
	int	n;

	result = 0;
	n = 0;
	revert = 1;
	while ((str[n] >= 9 && str[n] <= 13) || str[n] == ' ')
		n++;
	while (str[n] == '-' || str[n] == '+')
		if (str[n++] == '-')
			revert *= -1;
	result = 0;
	while (str[n] >= '0' && str[n] <= '9')
		result = result * 10 + str[n++] - '0';
	return (result * revert);
}
