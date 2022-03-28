/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:33:42 by eclark            #+#    #+#             */
/*   Updated: 2022/01/29 13:28:27 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0' )
	{
		n++;
	}
	return (n);
}
/*int main()
{
	char	str[20] = "hello";

	printf("length = %d\n", ft_strlen(str));
	printf("length_test = %lu\n", strlen(str));
}*/
