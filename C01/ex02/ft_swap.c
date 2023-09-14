/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:46:41 by mbrandao          #+#    #+#             */
/*   Updated: 2023/09/08 12:58:15 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 24;
	printf("before the function, a = %d and b = %d", a, b);
	ft_swap(&a, &b);
	printf("\nafter the function, a = %d and b = %d", a, b);	
	return (0);
}*/
