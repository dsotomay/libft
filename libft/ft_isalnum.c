/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dysotoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 19:35:19 by dysotoma          #+#    #+#             */
/*   Updated: 2018/02/21 09:20:38 by dysotoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isalnum(int c)
{
	unsigned char uc;

	uc = (unsigned char)c;
	if (ft_isalpha(uc) || ft_isdigit(uc))
		return (1);
	return (0);
}