/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:08:43 by mbrandao          #+#    #+#             */
/*   Updated: 2023/09/11 12:23:41 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] > 126))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	int i = ft_str_is_printable("D}D\n");
	int j = ft_str_is_printable("AD'SW");
	int e = ft_str_is_printable("");

	if (i == 0)
		printf("perfecto\n");
	if (j == 1)
		printf("perfect\n");
	if (e == 1)
		printf("perfecte");
	return (0);
}*/
