/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srenaud <srenaud@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:36:49 by srenaud           #+#    #+#             */
/*   Updated: 2024/12/13 16:49:44 by srenaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./includes/ft_printf.h"
# include <stdio.h>

int	main(void)
{
	ft_printf("char = %c\n", 'z');
	printf("char = %c\n", 'z');
	return (0);
}
