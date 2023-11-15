/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:47:14 by mbrandao          #+#    #+#             */
/*   Updated: 2023/09/21 14:54:56 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*new;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	new = (int *) malloc((max - min) * sizeof(int));
	if (!new)
		return (NULL);
	while (min < max)
	{
		new[i] = min;
		min++;
		i++;
	}
	return (new);
}
