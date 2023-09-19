/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:29:23 by mbrandao          #+#    #+#             */
/*   Updated: 2023/09/18 18:49:03 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_numeric(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

int	is_space(char c)
{
	if (c == ' ' || c == 9)
		return (1);
	else if (c == 10 || c == 11)
		return (1);
	else
		return (0);
}

int	sign_deal(int *i, int sign, char *str)
{
	int	j;

	j = *i;
	while (is_numeric(str[j]) == 0)
	{
		if (str[j] == '-')
		{
			sign = sign * -1;
			j++;
		}
		else if (str[j] == '+')
			j++;
		else
			return (-2000);
	}
	*i = j;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;
	int	fcres;

	result = 0;
	sign = 1;
	i = 0;
	while (is_space(str[i]) == 1)
		i++;
	fcres = sign_deal(&i, sign, str);
	if (fcres == -2000)
		return (0);
	else
		sign = fcres;
	while (is_numeric(str[i]) == 1)
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
/*
int	main(void)
{
	printf("42:%d\n", ft_atoi("  \n  42t4457"));
	printf("-42:%d\n", ft_atoi(" --+-42sfs:f545"));
	printf("0:%d\n", ft_atoi("\0 1337"));
	printf("0:%d\n", ft_atoi("-0"));
	printf("0:%d\n", ft_atoi(" - 1 3 2 5 6 3 2 1 6 7"));
	printf("-1325632167:%d\n", ft_atoi("-1325632167"));
	printf("-100:%d\n", ft_atoi("-100"));
	printf("min:%d\n", ft_atoi("\t---+2147483648"));
	printf("max:%d\n", ft_atoi("\v2147483647"));
}*/
