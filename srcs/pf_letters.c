/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_letters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srenaud <srenaud@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 11:46:43 by srenaud           #+#    #+#             */
/*   Updated: 2024/12/17 10:12:38 by srenaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pf_putchar(int c, int *len)
{
	*len += write(1, &c, 1);
}

void	pf_putstr(char *str, int *len)
{
	if (str == NULL)
	{
		*len += write(1, "(null)", 6);
		return ;
	}
	while (*str)
		*len += write(1, str++, 1);
}
