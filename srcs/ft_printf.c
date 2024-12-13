/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srenaud <srenaud@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:00:05 by srenaud           #+#    #+#             */
/*   Updated: 2024/12/13 16:35:18 by srenaud          ###   ########.fr       */
/*                                                                            */

# include "ft_printf.h"

void	pf_parcer(char *format, va_list *args, int *len)
{
	if (*format == 'c')
	{
		pf_putchar(va_arg(*args, int), len);
	}
	else
		format--;

}
int	ft_printf(char *format, ...)
{
	va_list	args;
	int	len;

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
			pf_parcer(format, &args, &len);
			format++;
		}
	}
	va_end(args);
	return(len);
}

