/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dysotoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 15:26:17 by dysotoma          #+#    #+#             */
/*   Updated: 2018/02/21 09:02:40 by dysotoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		c;
	int		neg;
	int		ret;

	c = 0;
	neg = 1;
	ret = 0;
	while (str[c] == '\v' || str[c] == '\f' || str[c] == '\t'
		|| str[c] == '\n' || str[c] == '\r' || str[c] == ' ')
		c++;
	if (str[c] == '-')
		neg = -1;
	if (str[c] == '-' || str[c] == '+')
		c++;
	while (str[c] >= '0' && str[c] <= '9')
		ret = ret * 10 + str[c++] - '0';
	ret *= neg;
	return (ret);
}
