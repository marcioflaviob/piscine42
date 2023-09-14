/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:23:32 by mbrandao          #+#    #+#             */
/*   Updated: 2023/09/08 13:04:02 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = size - 1;
	j = 0;
	while (j <= ((size / 2) - 1))
	{
		temp = tab[j];
		tab[j] = tab[i];
		tab[i] = temp;
		i--;
		j++;
	}
}

/*int	main(void)
{
	int tab[] = {2, 1, 6, 5, 0, 7};
	ft_rev_int_tab(tab, 6);
	
	int test = 0;
	while (test < 6)
	{
		printf("%d", tab[test]);
		test++;
	}
}*/
