/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:16:14 by mbrandao          #+#    #+#             */
/*   Updated: 2023/09/09 17:18:53 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_printnbr(int a)
{
	int	first_digit;
	int	second_digit;

	first_digit = a / 10;
	second_digit = a % 10;
	ft_putchar(first_digit + 48);
	ft_putchar(second_digit + 48);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 00;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_printnbr(a);
			ft_putchar(' ');
			ft_printnbr(b);
			if (a != 98 || b != 99)
				write (1, ", ", 2);
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
