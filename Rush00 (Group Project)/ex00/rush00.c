/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:05:58 by mbrandao          #+#    #+#             */
/*   Updated: 2023/09/10 16:59:26 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putline(char left, char middle, char right, int dim)
{
	ft_putchar(left);
	dim--;
	while (dim > 1)
	{
		ft_putchar(middle);
		dim--;
	}
	if (dim == 1)
	{
		ft_putchar(right);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if ((x <= 0) || (y <= 0))
	{
		write (1, "The 2 arguments need to be numbers above zero.\n", 49);
	}	
	if (x > 0 && y > 0)
	{
		ft_putline('o', '-', 'o', x);
		y --;
		while (y > 1)
		{
			ft_putline('|', ' ', '|', x);
			y --;
		}
		if (y == 1)
			ft_putline('o', '-', 'o', x);
	}
}
