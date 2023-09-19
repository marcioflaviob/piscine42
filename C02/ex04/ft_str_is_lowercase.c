/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:08:43 by mbrandao          #+#    #+#             */
/*   Updated: 2023/09/11 11:56:55 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 97) || (str[i] > 122))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	int i = ft_str_is_lowercase("asd}c");
	int j = ft_str_is_lowercase("fgfge");
	int e = ft_str_is_lowercase("");

	if (i == 0)
		printf("perfecto\n");
	if (j == 1)
		printf("perfect\n");
	if (e == 1)
		printf("perfecte");
	return (0);
}*/
