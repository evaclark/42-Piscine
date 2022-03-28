/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:55:47 by eclark            #+#    #+#             */
/*   Updated: 2022/01/20 13:37:57 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 69;
	y = 12;
	ft_ultimate_div_mod(&x, &y);
	printf("Division %d\n", x);
	printf("Modulus %d\n", y);
	return (0);
	
 	* *a and *b are pointing to the address of x and y, &x, &y 
	 * using * outside of defining the variable derefrences the pointer, so now
	 * a is pointing to the value of *a, 21
}*/
