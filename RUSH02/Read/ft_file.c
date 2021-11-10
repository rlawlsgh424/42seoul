
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaejkim <chaejkim@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:30:15 by chaejkim          #+#    #+#             */
/*   Updated: 2021/10/24 21:36:21 by jkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "rush02.h"

#define BUFF_SIZE 4096

char	*make_key(char *key, char *buf, int cnt, int len)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	key = (char *)malloc(len + 1);
	while (buf[cnt + j] != ' ' && buf[cnt + j] != ':')
	{
		key[i] = buf[cnt + j];
		i++;
		j++;
	}
	key[i] = '\0';
	return key;
}

char	*make_value(char *value, char *buf, int cnt, int len)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	value = (char *)malloc(len + 1);
	while (buf[cnt + j] != ' ' && buf[cnt + j] != ':')
		j++;
	while (buf[cnt + j] != ' ')
		j++;
	while (buf[cnt + j] != '\0')
	{
		value[i] = buf[cnt + j];
		i++;;
		j++;
	}
	value[j] = '\0';
	return value;
}

void	put_dict(char *buf, int buf_len)
{
	int		cnt;
	int		len;
	dict	dic;
	char	*key;
	char	*value;

	cnt = 0;
	dict_init(&dic);
	while (cnt < buf_len)
	{
		len = 0;
		while (buf[cnt + len] != '\n')
			len++;
		key = make_key(key, buf, cnt, len);
		value = make_value(value, buf, cnt, len);
		if (key && value)
			dict_add(&dic, key, value);
		cnt = cnt + len + 1;
	}
	dict_out(dic);
	dict_free(&dic);
}

int	read_file(void)
{
	int		fd;
	int		buf_len;
	char	*buf;

	fd = 0;
	buf_len = 0;
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 11);
		return (-1);
	}
	buf = (char *)malloc(sizeof(char) * BUFF_SIZE);
	buf_len = read(fd, buf, BUFF_SIZE);
	//buf = (char *)malloc(sizeof(char) * 30);
	//buf_len = read(fd, buf, 30);
	int	i;
	i = 0;
	while (buf[i])
	{
		write(1, &buf[i], 1);
		i++;
	}
	put_dict(buf, buf_len);
	close(fd);
	free(buf);
	return (0);
}

int	main(void)
{
	read_file();
	// if (read_file() == -1)
	// 	return (1);
	// return (0);
}
