/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srenaud <srenaud@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 18:09:35 by srenaud           #+#    #+#             */
/*   Updated: 2024/12/16 17:20:53 by srenaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pf_putnbr(long int n, int *len)
{
	int	digit;

	if (n == -2147483648)
	{
		n *= -1;
		len += write(1, "-2147483648", 1);
		return ;
	}
	if (n >= 10)
	{
		pf_putnbr(n / 10, len);
		pf_putnbr(n % 10, len);
	}
	if (n < 10)
	{
		digit = n + '0';
		*len += write(1, &digit, 1);
	}
	return ;
}


void	pf_putnbr_16(long int n, char speci, int *len)
{
	char	*xX;

	if (speci == 'X')
		xX = "0123456789ABCDEF";
	else
		xX = "0123456789abcdef";
	if (n >= 16)
	{
		pf_putnbr_16(n / 16, speci, len);
		pf_putnbr_16(n % 16, speci, len);
	}
	if (n < 16)
		*len += write(1, &xX[n], 1);
	return ;
}
