/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_print.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqiouami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:34:10 by aqiouami          #+#    #+#             */
/*   Updated: 2022/10/28 13:34:43 by aqiouami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_unsigned_print(unsigned int n, int *count)
{
	if (n < 10)
		*count += ft_putchar(n + 48);
	if (n >= 10)
	{
		ft_unsigned_print(n / 10, count);
		*count += ft_putchar(n % 10 + 48);
	}
}
