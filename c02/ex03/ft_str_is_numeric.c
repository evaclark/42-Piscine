/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:18:48 by eclark            #+#    #+#             */
/*   Updated: 2022/01/25 12:34:34 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9' )
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main (void)
{
	char	str1[] = "";
	char	str2[] = "123fe4";

	int a;

	a = 2;
	
	int b;
	
	b = 3;

	a = ft_str_is_numeric(str1);

	b = ft_str_is_numeric(str2);

	printf("str1 = %d\n", a);
	printf("str2 = %d\n", b);
}*/
