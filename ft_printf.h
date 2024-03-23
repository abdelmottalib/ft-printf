/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqiouami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:25:25 by aqiouami          #+#    #+#             */
/*   Updated: 2022/10/28 14:52:35 by aqiouami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define FLAGS "cspdiuxX%"

# include <stdarg.h>
# include <unistd.h>

void	format_specifier(va_list args, char a, int *count);
int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
void	ft_putnbr(int n, int *count);
void	ft_putstr(char *str, int *count);
void	ft_unsigned_print(unsigned int n, int *count);
void	ft_hex(unsigned long long a, char c, int *count);
void	ft_p_pointer(unsigned long long pointer, int *count);
char	*ft_strchr(const char *s, int c);
#endif
