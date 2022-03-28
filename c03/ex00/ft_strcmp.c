/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:30:51 by eclark            #+#    #+#             */
/*   Updated: 2022/01/27 11:51:26 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*int main()
{
	char str1[] = "fourty two";
	char str2[] = "fourty two";
	char str3[] = "fourTy two";
	char str4[] = "four";
	char str5[] = "Fourty Two";

	int a;
	int b;
	int c;
	int d;

	a = ft_strcmp(str1, str2);
	b = ft_strcmp(str1, str3);
	c = ft_strcmp(str5, str1);
	d = ft_strcmp(str1, str4);

	printf("diff = %d\n", a);
	printf("difft = %d\n", strcmp(str1, str2));
	printf("diff2 = %d\n", b);
	printf("diff2t = %d\n", strcmp(str1, str3));
	printf("diff3 = %d\n", c);
	printf("diff3t = %d\n", strcmp(str5, str1));
	printf("diff4 = %d\n", d);
	printf("diff4t = %d\n", strcmp(str1, str4));
}*/
