/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srenaud <srenaud@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:36:49 by srenaud           #+#    #+#             */
/*   Updated: 2024/12/17 16:53:41 by srenaud          ###   ########.fr       */
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
	ft_printf("%%\n");
	write(1, "   / /   / /      ", 19);
	printf("%%\n");
	write(1, "  / /   / /       ", 19);
	ft_printf("%%%%\n");
	write(1, " / / _ / / _      ", 19);
	printf("%%%%\n");
	write(1, "/_/ (_)_/ (_)      \n", 20);


	write(1,"\n\n\t%s%s%s\n",10);
	printf("%d\n",ft_printf("ft_printf: %s", "Hello world!!"));
	printf("%d\n",printf("   printf: %s", "Hello world!!"));
	printf("	%d\n",ft_printf("ft_printf: %s","null ca marche pas, c'est null"));
	printf("	%d\n",printf("   printf: %s","null ca marche pas, c'est null"));

	int	len;
	len = 0;

	write(1,"\n\n\t%d%d%d\n",10);
	len = ft_printf("ft_printf	|%d|",123456789);
	printf("	|%d|\n",len);
	len = printf("   printf	|%d|",123456789);
	printf("	|%d|\n",len);

	len = ft_printf("ft_printf	|%d|",-123456789);
	printf("	|%d|\n",len);
	len = printf("   printf	|%d|",-123456789);
	printf("	|%d|\n",len);
	
	write(1,"\n\n\t%i%i%i\n",10);
	len = ft_printf("ft_printf	|%i|",123456789);
	printf("	|%i|\n",len);
	len = printf("   printf	|%i|",123456789);
	printf("	|%i|\n",len);

	len = ft_printf("ft_printf	|%i|",-123456789);
	printf("	|%i|\n",len);
	len = printf("   printf	|%i|",-123456789);
	printf("	|%i|\n",len);

	write(1,"\n\n\t%u%u%u\n",10);
	len = ft_printf("ft_printf	|%u|",123456789);
	printf("	|%u|\n",len);
	len = printf("   printf	|%u|",123456789);
	printf("	|%u|\n",len);
	
	write(1,"\n\n\t%x%x%x\n",10);
	len = ft_printf("ft_printf	|%x|",255);
	printf("	|%u|\n", len);
	len = printf("   printf	|%x|",255);
	printf("	|%u|\n",len);

	len = ft_printf("ft_printf	|%x|", 0);
	printf("	|%u|\n", len);
	len = printf("   printf	|%x|", 0);
	printf("	|%u|\n", len);

	len = ft_printf("ft_printf	|%x|", 42);
	printf("	|%u|\n", len);
	len = printf("   printf	|%x|", 42);
	printf("	|%u|\n", len);

	write(1,"\n\n\t%X%X%X\n",10);
	len = ft_printf("ft_printf	|%X|",255);
	printf("	|%u|\n", len);
	len = printf("   printf	|%X|",255);
	printf("	|%u|\n",len);

	len = ft_printf("ft_printf	|%X|", 0);
	printf("	|%u|\n", len);
	len = printf("   printf	|%X|", 0);
	printf("	|%u|\n", len);

	len = ft_printf("ft_printf	|%X|", 42);
	printf("	|%u|\n", len);
	len = printf("   printf	|%X|", 42);
	printf("	|%u|\n", len);

	write(1,"\n\n\t%p%p%p\n",10);
	int	ptr;
	len = ft_printf("ft_printf	|%p|", &ptr);
	printf("	|%u|\n", len);
	len = printf("   printf	|%p|", &ptr);
	printf("	|%u|\n",len);

	len = ft_printf("ft_printf	|%p|", NULL);
	printf("	|%u|\n", len);
	len = printf("   printf	|%p|", NULL);
	printf("	|%u|\n",len);

	len = ft_printf("ft_printf	|%p|", (void *)-14523);
	printf("	|%u|\n", len);
	len = printf("   printf	|%p|", (void *)-14523);
	printf("	|%u|\n",len);

	write(1,"\n\n\t%s%d%c\n",10);
	len = ft_printf("ft_printf	|%s%d%c|","hello world", 123456789, 'Y');
	printf("	|%d|\n",len);
	len = printf("   printf	|%s%d%c|","hello world", 123456789, 'Y');
	printf("	|%d|\n",len);
	

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

