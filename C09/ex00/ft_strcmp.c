/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:03:42 by mbrandao          #+#    #+#             */
/*   Updated: 2023/09/18 13:10:41 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char s1[] = "Test1";
	char s2[] = "OK";
	char s3[] = "Same";
	char s4[] = "Size";
	char s5[] = "Shorter";
	char s6[] = "ThanMyself";

	printf("%d, %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	printf("%d, %d\n", ft_strcmp(s3, s4), strcmp(s3, s4));
	printf("%d, %d\n", ft_strcmp(s5, s6), strcmp(s5, s6));
	printf("%d, %d\n", ft_strcmp(s5, s5), strcmp(s5, s5));
}*/

int	ft_strcount(char *str, char *str2)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (str[i] == str2[i] && str[i] != '\0')
		i++;
	if (str[i] != str2[i])
		size = ((int) str[i]) - ((int) str2[i]);
	return (size);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	size;

	size = ft_strcount(s1, s2);
	return (size);
}

/*
int	main(void)
{
	char str[] = "test";
	char str2[] = "test0";

	printf("%d", ft_strcmp(str, str2));
}*/
