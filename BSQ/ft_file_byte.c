/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_byte.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkim2 <jkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:56:19 by jkim2             #+#    #+#             */
/*   Updated: 2021/10/26 12:56:57 by jkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_file_byte(char *argv)
{
	int		byte;
	char	buf;
	int		fd;

	byte = 0;
	fd = open(argv, O_RDONLY);
	while (read(fd, &buf, 1))
		byte++;
	close(fd);
	return (byte);
}
