/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_plus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srenaud <srenaud@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:36:49 by srenaud           #+#    #+#             */
/*   Updated: 2024/12/23 17:25:20 by srenaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	len;

	write(1, "%%\n", 3);
	write(1, "printf    = ", 12);
	len = printf("%%");
	printf("			len = %d\n", len);
	write(1, "ft_printf = ", 12);
	len = ft_printf("%%");
	printf("			len = %d\n", len);
	
	write(1, "\n%%%%\n", 6);
	write(1, "printf    = ", 12);
	len = printf("%%%%");
	printf("			len = %d\n", len);
	write(1, "ft_printf = ", 12);
	len = ft_printf("%%%%");
	printf("			len = %d\n", len);
	
	write(1, "\n%s%d%c%X\n", 10);
	write(1, "printf    = ", 12);
	len = printf("%s %d '%c' %X","hello",42,'a',42);
	printf("	len = %d\n", len);
	write(1, "ft_printf = ", 12);
	len = ft_printf("%s %d '%c' %X","hello",42,'a',42);
	printf("	len = %d\n", len);

	return (0);
}
