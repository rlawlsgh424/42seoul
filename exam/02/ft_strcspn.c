/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkim2 <jkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 23:58:51 by jkim2             #+#    #+#             */
/*   Updated: 2021/10/29 00:17:46 by jkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t i;
	size_t i2;

	i = 0;
	i2 = 0;
	while (s[i] != '0')
	{
		i2 = 0;
		while (reject[i2] != '0')
		{
			if (s[i] == reject[i2])
				return (i);
			i2++;
		}
		i++;
	}
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strcspn("Hello World", "e"));
}
