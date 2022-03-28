/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:57:30 by eclark            #+#    #+#             */
/*   Updated: 2022/01/25 13:11:48 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		if (str[i] < 32)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main()
{
	char str1[] = "			";
	char str2[] = "hi";

	int a = 2;
	int b = 3;

	a = ft_str_is_printable(str1);
	b = ft_str_is_printable(str2);

	printf("str1 = %d\n", a);
	printf("str2 = %d\n", b);
}*/
