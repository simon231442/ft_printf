#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
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
		len = printf(format, atoi(value));
	else if (format[1] == 'u')                        // %u
		len = printf(format, (unsigned int)atoi(value));
	else if (format[1] == 'x' || format[1] == 'X')    // %x, %X
		len = printf(format, (unsigned int)strtol(value, NULL, 10));
	else if (format[1] == 's')                        // %s
		len = printf(format, value);
	else if (format[1] == 'c')                        // %c
		len = printf(format, value[0]);
	else if (format[1] == 'p')                        // %p
		len = printf(format, (void *)strtol(value, NULL, 16));
	else if (format[1] == '%')                        // %%
		len = printf(format, value);

	else
	{
		write(2, "Unsupported format.\n", 20);
		return (1);
	}


	return (len);
}
