/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqiouami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:30:49 by aqiouami          #+#    #+#             */
/*   Updated: 2022/10/28 13:31:33 by aqiouami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb = nb * -1;
		*count += ft_putchar('-');
	}
	if (nb >= 0 && nb <= 9)
		*count += ft_putchar(nb + 48);
	else
	{
		ft_putnbr((nb / 10), count);
		*count += ft_putchar(nb % 10 + 48);
	}
}
