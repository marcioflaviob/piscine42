/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:07:20 by mbrandao          #+#    #+#             */
/*   Updated: 2023/09/21 21:07:23 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	pow_len(char *str, char *base);

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
		else if (str[i] == ' ' || str[i] == 126)
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

int	power(int nb, int pow)
{
	int	res;

	res = nb;
	if (pow == 0)
		return (1);
	while (pow != 1)
	{
		res = res * nb;
		pow--;
	}
	return (res);
}

int	last_while(int i, int j, char *str, char *base)
{
	int	res;
	int	pow;

	res = 0;
	pow = pow_len(str, base) - 1;
	while (base[j] != 0)
	{
		if (str[i] == base[j])
		{
			res = res + j * power(str_len(base), pow--);
			i++;
			j = 0;
		}
		j++;
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	i;
	int	j;

	sign = 1;
	i = 0;
	j = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
		sign = sign * (1 - 2 * (str[i++] == '-'));
	if ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		return (0);
	return (last_while(i, j, str, base) * sign);
}
