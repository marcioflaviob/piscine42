/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:34:55 by mbrandao          #+#    #+#             */
/*   Updated: 2023/09/28 14:34:59 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i++]);
	}
}
/*
int main(void)
{
    int tab[] = {123, 321, 456, 5341, 6, 46, 453};
    ft_foreach(tab, 7, &ft_putnbr);
}*/
