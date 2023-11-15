/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:30:31 by mbrandao          #+#    #+#             */
/*   Updated: 2023/09/21 15:45:00 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*new;
	int	i;
	int	size;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	new = (int *) malloc(size * sizeof(int));
	if (!new)
	{
		*range = 0;
		return (-1);
	}
	*range = new;
	i = 0;
	while (i < size)
	{
		new[i] = min + i;
		i++;
	}
	return (size);
}
