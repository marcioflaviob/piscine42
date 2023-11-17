/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:57:54 by mbrandao          #+#    #+#             */
/*   Updated: 2023/09/13 13:01:33 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (to_find[j] != '\0' && to_find[j] == str[i + j])
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		else
		{
			j = 0;
			i++;
		}
	}
	if (to_find[j] == '\0')
		return (str + i);
	return (0);
}
