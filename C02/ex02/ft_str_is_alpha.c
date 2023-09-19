/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:08:43 by mbrandao          #+#    #+#             */
/*   Updated: 2023/09/11 11:44:54 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65) || (str[i] > 90))
		{
			if ((str[i] < 97) || (str[i] > 122))
				return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int i = ft_str_is_alpha("arr|ba");
	int j = ft_str_is_alpha("arroba");

	if (i == 0)
		printf("perfecto\n");
	if (j == 1)
		printf("perfect");
	return (0);
}*/
