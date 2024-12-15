/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srenaud <srenaud@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:36:49 by srenaud           #+#    #+#             */
/*   Updated: 2024/12/15 18:04:39 by srenaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{

	write(1, " _   __           \n", 20);
	write(1, "(_) / /           ", 19);
	ft_printf("char = %c\n", 'z'); // ft_printf
	write(1, "   / / ___        ", 19);
	printf("char = %c\n", 'z');  // printf
	write(1, "  / / / __|       \n", 20);
	write(1, " / / | (__        \n", 20);
	write(1, "/_/ (_)___|       \n", 20);

	write(1, " _   ___   __     \n", 20);
	write(1, "(_) / (_) / /     ", 19);
	ft_printf("%%\n"); // ft_printf pour le premier test
	write(1, "   / /   / /      ", 19);
	printf("%%\n");  // printf pour le deuxième test
	write(1, "  / /   / /       ", 19);
	ft_printf("%%%%\n"); // ft_printf pour le premier test
	write(1, " / / _ / / _      ", 19);
	printf("%%%%\n");  // printf pour le deuxième test
	write(1, "/_/ (_)_/ (_)      \n", 20);

	printf("%d\n",ft_printf("ft_printf: %s", "Hello world!!\n"));
	printf("%d\n",printf("printf:    %s", "Hello world!!\n"));
	
	return (0);
}

/*
 _   __       
(_) / /       
   / / ___    
  / / / __|   
 / / | (__    
/_/ (_)___|   
              
              
 _   __       
(_) / /       
   / / ___    
  / / / __|   
 / / _\__ \   
/_/ (_)___/   
              
              
 _   __       
(_) / /       
   / / _ __   
  / / | '_ \  
 / / _| |_) | 
/_/ (_) .__/  
      | |     
      |_|     
 _   __   _   
(_) / /  | |  
   / / __| |  
  / / / _` |  
 / / | (_| |  
/_/ (_)__,_|  
              
              
 _   ___      
(_) / (_)     
   / / _      
  / / | |     
 / / _| |     
/_/ (_)_|     
              
              
 _   __       
(_) / /       
   / /_   _   
  / /| | | |  
 / / | |_| |  
/_/ (_)__,_|  
              
              
 _   __       
(_) / /       
   / /__  __  
  / / \ \/ /  
 / / _ >  <   
/_/ (_)_/\_\  
              
              
 _   ____   __
(_) / /\ \ / /
   / /  \ V / 
  / /   /   \ 
 / / _ / /^\ \
/_/ (_)\/   \/
              
              
 _   ___   __ 
(_) / (_) / / 
   / /   / /  
  / /   / /   
 / / _ / / _  
/_/ (_)_/ (_) 
              
              */

