/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 22:01:06 by mbrandao          #+#    #+#             */
/*   Updated: 2023/09/08 13:05:30 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	low;

	i = 0;
	while (i < size)
	{
		low = tab[i];
		j = i + 1;
		while (j < size)
		{
			if (tab[j] <= low)
			{
				low = tab[j];
				tab[j] = tab[i];
				tab[i] = low;
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	int tab[] = {5, 9, -2, 7, 1, 0};
	ft_sort_int_tab(tab, 6);
	int i = 0;
	while (i < 6)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}*/
