/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:20:04 by eclark            #+#    #+#             */
/*   Updated: 2022/01/25 13:54:49 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		if (str[i] >= 'a' && str[i] <= 'z' )
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int main()
{
	char	str1[] = "hi how are you";
	char	str2[] = "HI";

	ft_strupcase(str1);
	ft_strupcase(str2);

	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);
}*/
