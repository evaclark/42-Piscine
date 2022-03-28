/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 21:15:29 by eclark            #+#    #+#             */
/*   Updated: 2022/01/26 16:49:20 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (dest[n] != '\0' )
	{
		n++;
	}
	while (src[i] != '\0' )
	{
		dest[n] = src[i];
		n++;
		i++;
	}
	dest[n] = '\0';
	return (dest);
}

/*int main()
{
	char str1[50] = "hi how ";
	char str2[50] = "are you?";
	
	 ft_strcat(str1, str2);

	printf("dest = %s\n", str1);
}*/
