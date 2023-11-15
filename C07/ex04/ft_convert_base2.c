/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:34:00 by mbrandao          #+#    #+#             */
/*   Updated: 2023/09/21 21:34:06 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	check_base(char *str);
int	str_len(char *str);

int	char_in(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	pow_len(char *str, char *base)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (str[size] == ' ')
		size++;
	while (str[size] == '-' || str[size] == '+')
		size++;
	while (str[size] != 0 && char_in(str[size], base))
	{
		size++;
		i++;
	}
	return (i);
}

int	null_check(char *str, char *base)
{
	int	size;

	size = 0;
	while (str[size] == ' ')
		size++;
	while (str[size] == '-' || str[size] == '+')
		size++;
	if (!char_in(str[size], base))
		return (1);
	else
		return (0);
}

char	*ft_putnbr_base(int nbr, char *base, char *ptr)
{
	unsigned int	base_size;
	unsigned int	i;
	unsigned int	nb;

	i = 0;
	base_size = str_len(base);
	if (nbr < 0)
	{
		nb = nbr * -1;
		ptr[i++] = '-';
	}
	else
		nb = nbr;
	if (nb >= base_size)
	{
		ft_putnbr_base((nb / base_size), base, ptr);
		ft_putnbr_base((nb % base_size), base, ptr);
	}
	else
	{
		while (ptr[i] != 0)
			i++;
		ptr[i] = base[nb];
	}
	return (ptr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		cv1;
	char	*cv2;

	if (check_base(base_from) == 0 || check_base(base_to) == 0)
		return (NULL);
	if (null_check(nbr, base_from))
		return (NULL);
	cv1 = ft_atoi_base(nbr, base_from);
	cv2 = (char *) malloc(str_len(nbr) * sizeof(char));
	ft_putnbr_base(cv1, base_to, cv2);
	return (cv2);
}
