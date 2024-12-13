#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// libraries
# include <unistd.h>
# include <stdarg.h>

// prototypes
void    pf_parcer(char *format, va_list *args, int *len);
int     ft_printf(char *format, ...);
void	pf_putchar(int c, int *len);

#endif
