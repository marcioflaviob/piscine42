/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:07:07 by mbrandao          #+#    #+#             */
/*   Updated: 2023/09/28 21:07:08 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	boole;

	i = 0;
	boole = 1;
	while (i < length - 1 && boole)
	{
		if ((*f)(tab[i], tab [i + 1]) < 0)
			boole = 0;
		i++;
	}
	if (boole != 1)
	{
		boole = 1;
		i = 0;
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	}
	return (1);
}
