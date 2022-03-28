/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:46:28 by eclark            #+#    #+#             */
/*   Updated: 2022/01/25 12:56:51 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		if (str[i] < 'A' || str[i] > 'Z' )
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main()
{
	char 	str1[] = "";
	char	str2[] = "ASFEW";

	int a = 2;
	int b = 3;

	a = ft_str_is_uppercase(str1);
	b = ft_str_is_uppercase(str2);

	printf("str1 = %d\n", a);
	printf("str2 = %d\n", b);
}*/
