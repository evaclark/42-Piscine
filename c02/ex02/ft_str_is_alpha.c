/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:30:39 by eclark            #+#    #+#             */
/*   Updated: 2022/01/25 12:18:21 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
			i++;
	}
	return (1);
}
/*int main (void)
{
	char str1[] = "abs";

	char str2[] = "ab345";

	int a = 2;

	int b = 3;

	a = ft_str_is_alpha(str1);
	b = ft_str_is_alpha(str2);

	printf("str1 = %d\n", a);
	printf("str2 = %d\n", b);
}*/
