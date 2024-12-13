/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_va_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srenaud <srenaud@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:08:32 by srenaud           #+#    #+#             */
/*   Updated: 2024/12/12 12:39:56 by srenaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int sum(int count, ...)
{
	va_list	args;
	int	sum = 0;
	int	i = 0;

	va_start(args, count);
	while (i < count)
	{
		sum = sum + va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}

#include <stdio.h>

int	main(void)
{
	printf("sum = %d", sum(4, 1, 2, 3, 4));
	return(0);
}
