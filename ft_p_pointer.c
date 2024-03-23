/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_pointer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqiouami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:02:59 by aqiouami          #+#    #+#             */
/*   Updated: 2022/10/28 13:03:51 by aqiouami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_p_pointer(unsigned long long pointer, int *count)
{
	write (1, "0x", 2);
	(*count) += 2;
	ft_hex(pointer, 'x', count);
}
