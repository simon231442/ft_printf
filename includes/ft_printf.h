/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srenaud <srenaud@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:00:51 by srenaud           #+#    #+#             */
/*   Updated: 2024/12/17 16:01:28 by srenaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// libraries
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

// prototypes
void	pf_parser(const char *format, va_list *args, int *len);
int		ft_printf(const char *format, ...);
void	pf_putchar(int c, int *len);
void	pf_putstr(char *str, int *len);
void	pf_putnbr(long int n, int *len);
void	pf_putnbr_16(long int n, char speci, int *len);
void	pf_putptr(void *ptr, int *len);
#endif