/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:35:03 by eclark            #+#    #+#             */
/*   Updated: 2022/01/25 13:19:14 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main(void)
{
	char	str1[] = "ascde";
	char	str2[] = "";

	int a = 4;
	int b = 2;

	a = ft_str_is_lowercase(str1);
	b = ft_str_is_lowercase(str2);

	printf("str1 = %d\n", a);
	printf("str2 = %d\n", b);
}*/
