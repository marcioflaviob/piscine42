/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:19:15 by mbrandao          #+#    #+#             */
/*   Updated: 2023/09/08 13:00:12 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aa;
	int	bb;

	aa = *a / *b;
	bb = *a % *b;
	*a = aa;
	*b = bb;
}

/*int	main(void)
{
	int a = 56;
	int b = 10;

	printf("bf a = %d, b = %d", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("\naf a = %d, b = %d", a, b);
	return (0);
}*/
