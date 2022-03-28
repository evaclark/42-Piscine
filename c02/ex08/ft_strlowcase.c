/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:55:17 by eclark            #+#    #+#             */
/*   Updated: 2022/01/25 14:27:53 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		if (str[i] >= 'A' && str[i] <= 'Z' )
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*int main ()
{
	char	str1[] = "HI HOW ARE YOU?";
	char 	str2[] = "hi abcd";

	ft_strlowcase(str1);
	ft_strlowcase(str2);

	printf("str 1 = %s\n", str1);
	printf("str 2 = %s\n", str2);
}*/
