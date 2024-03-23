/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqiouami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:59:52 by aqiouami          #+#    #+#             */
/*   Updated: 2022/10/28 14:48:32 by aqiouami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_hex(unsigned long long a, char c, int *count)
{
	char	*hex_lower;
	char	*hex_upper;

	hex_upper = "0123456789ABCDEF";
	hex_lower = "0123456789abcdef";
	if (a < 16)
	{
		if (c == 'x')
			*count += ft_putchar(hex_lower[a]);
		else if (c == 'X')
			*count += ft_putchar(hex_upper[a]);
	}
	else if (a >= 16)
	{
		ft_hex(a / 16, c, count);
		ft_hex(a % 16, c, count);
	}
}
