/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srenaud <srenaud@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:07:50 by srenaud           #+#    #+#             */
/*   Updated: 2024/12/16 17:08:02 by srenaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pf_parser(char *format, va_list *args, int *len)
{
	if (*format == 'c')
		pf_putchar(va_arg(*args, int), len);
	else if (*format == '%')
		pf_putchar('%', len);
	else if (*format == 's')
		pf_putstr(va_arg(*args, char *), len);
	else if (*format == 'd' || *format == 'i')
		pf_putnbr(va_arg(*args, int), len);
	else if (*format == 'u')
		pf_putnbr(va_arg(*args, unsigned int), len);
	else if (*format == 'x')
		pf_putnbr_16(va_arg(*args, unsigned int), format[-1], len);
	else if (*format == 'X')
		pf_putnbr_16(va_arg(*args, unsigned int), format[-1], len);
	else if (*format == 'p')
		pf_putnbr_16(va_arg(*args, unsigned int), format[-1], len);
	else
		format--;
	return ;
}

int	ft_printf(char *format, ...)
{
	va_list		args;
	int			len;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			pf_putchar(*format, &len);
			format++;
		}
		else if (*format == '%')
		{
			format++;
			pf_parser(format, &args, &len);
			format++;
		}
	}
	va_end(args);
	return (len);
}
