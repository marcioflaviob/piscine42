/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:13:06 by mbrandao          #+#    #+#             */
/*   Updated: 2023/09/25 19:46:44 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	t_stock_str	*tab;
	t_stock_str	temp;
	char		*tcopy;

	i = 0;
	tab = (t_stock_str *) malloc((ac + 1) * sizeof(t_stock_str));
	while (i < ac)
	{
		temp.size = ft_strlen(av[i]);
		temp.str = av[i];
		tcopy = (char *) malloc(ft_strlen(av[i]) * sizeof(char) + 1);
		j = 0;
		while (av[i][j] != 0)
		{
			tcopy[j] = av[i][j];
			j++;
		}
		temp.copy = tcopy;
		tab[i++] = temp;
	}
	tab[i].str = 0;
	return (tab);
}
