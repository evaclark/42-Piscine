/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:11:27 by eclark            #+#    #+#             */
/*   Updated: 2022/01/20 13:04:02 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int x;
	int y;
	int w;
	int z;
	
	x = 7;
	y = 3;
	
	ft_div_mod(x, y, &w, &z);
	printf("Division %d\n", w);
	printf("Modulus %d\n", z);
	return (0);

	w and z are empty variables so their value is overridden in the ft_div_mod
	function, printed out as w and z
}*/
