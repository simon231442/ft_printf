#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"
#include <string.h>

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		write(2, "Usage: ./test_program <format> <value>\n", 39);
		return (1);
	}
	int	len;

	len = 0;
	// Extraire le format
	char *format = argv[1];
	char *value = argv[2];

	// Interpréter la valeur selon le format
	if (format[1] == 'd' || format[1] == 'i')         // %d, %i
		len = ft_printf(format, atoi(value));
	else if (format[1] == 'u')                        // %u
		len = ft_printf(format, (unsigned int)atoi(value));
	else if (format[1] == 'x' || format[1] == 'X')    // %x, %X
		len = ft_printf(format, (unsigned int)strtol(value, NULL, 10));
	else if (format[1] == 's')
	{
		if (strcmp(value, "NULL") == 0)
			len = ft_printf(format, (void *)0);
		else
			len = ft_printf(format, value);
		}
	else if (format[1] == 'c')                        // %c
		len = ft_printf(format, value[0]);
	else if (format[1] == 'p')                        // %p
		len = ft_printf(format, (void *)strtol(value, NULL, 16));
	else if (format[1] == '%')                        // %%
		len = ft_printf(format, value);
	else
	{
		write(2, "Unsupported format.\n", 20);
		return (1);
	}


	return (len);
}
