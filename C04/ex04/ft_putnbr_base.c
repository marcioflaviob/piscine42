/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:51:01 by mbrandao          #+#    #+#             */
/*   Updated: 2023/09/18 20:18:01 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	str_len(char *str)
{
	int	size;

	size = 0;
	while (str[size] != 0)
	{
		size++;
	}
	return (size);
}

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if ((str[0] == 0) || str_len(str) == 1)
		return (0);
	while (str[i] != 0)
	{
		j = i + 1;
		if (str[i] == '+' || str[i] == '-')
			return (0);
		else if (str[i] < 32 || str[i] > 126)
			return (0);
		while (str[j] != 0)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_size;
	unsigned int	n;

	if (check_base(base) == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			n = nbr * -1;
		}
		else
			n = nbr;
		base_size = str_len(base);
		if (n > base_size)
		{
			ft_putnbr_base((n / base_size), base);
			ft_putnbr_base((n % base_size), base);
		}
		else
			ft_putchar(base[n]);
	}
}
/*
int		main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(2147483647, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-2147483648, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
}*/
