/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_letters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srenaud <srenaud@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 11:46:43 by srenaud           #+#    #+#             */
/*   Updated: 2024/12/15 15:00:32 by srenaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pf_putchar(int c, int *len)
{
	*len += write(1, &c, 1);
}

void	pf_putstr(char *str, int *len)
{
	while (*str)
		*len += write(1, str++, 1);
}
