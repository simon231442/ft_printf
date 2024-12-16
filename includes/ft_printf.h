#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// libraries
# include <unistd.h>
# include <stdarg.h>

// prototypes
void    pf_parcer(char *format, va_list *args, int *len);
int     ft_printf(char *format, ...);
void	pf_putchar(int c, int *len);
void    pf_putstr(char *str, int *len);
void	pf_putnbr(long int n, int *len);
void    pf_putnbr_16(long int n, char speci, int *len);
#endif
