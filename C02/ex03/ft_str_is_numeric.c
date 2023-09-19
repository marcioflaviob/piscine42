/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:08:43 by mbrandao          #+#    #+#             */
/*   Updated: 2023/09/11 11:52:40 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 48) || (str[i] > 57))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	int i = ft_str_is_numeric("85a8");
	int j = ft_str_is_numeric("895");

	if (i == 0)
		printf("perfecto\n");
	if (j == 1)
		printf("perfect");
	return (0);
}*/
