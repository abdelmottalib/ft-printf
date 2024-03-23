/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqiouami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:04:09 by aqiouami          #+#    #+#             */
/*   Updated: 2022/10/29 16:50:55 by aqiouami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	format_specifier(va_list args, char a, int *count)
{
	if (a == 'd' || a == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (a == 'c')
		*count += ft_putchar(va_arg(args, int));
	else if (a == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (a == 'u')
		ft_unsigned_print(va_arg(args, unsigned int), count);
	else if (a == 'x' || a == 'X')
		ft_hex(va_arg(args, unsigned int), a, count);
	else if (a == '%')
		*count += ft_putchar('%');
	else if (a == 'p')
		ft_p_pointer(va_arg(args, unsigned long long), count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = -1;
	count = 0;
	va_start(args, str);
	while (str[++i])
	{
		if (str[i] == '%' && str[i + 1] == '\0')
			ft_putchar('\0');
		else if (str[i] == '%' && (!ft_strchr(FLAGS, str[i + 1])))
		{
			i++;
			continue ;
		}
		else if (str[i] == '%' && ft_strchr (FLAGS, str[i + 1]))
			format_specifier((args), str[i++ + 1], &count);
		else
			count += ft_putchar(str[i]);
	}
	va_end(args);
	return (count);
}
