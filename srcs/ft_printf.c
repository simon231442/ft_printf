
#include "ft_printf.h"

void	pf_parcer(char *format, va_list *args, int *len)
{
	if (*format == 'c')
		pf_putchar(va_arg(*args, int), len);
	else if (*format == '%')
		pf_putchar('%', len);
	else if (*format == 's')
		pf_putstr(va_arg(*args, char*), len);
	else
		format--;
}

int	ft_printf(char *format, ...)
{
	va_list		args;
	int		len;

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
	return (len);
}
