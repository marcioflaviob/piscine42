/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:45:47 by mbrandao          #+#    #+#             */
/*   Updated: 2023/09/21 20:09:21 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			total++;
			j++;
		}
		if (i < size - 1)
			total += ft_strlen(sep);
		i++;
	}
	return (total);
}

char	*ft_strcpy(char *new_str, char *strs, int *str_i)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		new_str[*str_i + i] = strs[i];
		i++;
	}
	*str_i += i;
	return (new_str);
}

char	*null_handler(char *new_str)
{
	new_str = malloc(1);
	new_str[0] = '\0';
	return (new_str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*new;
	int		new_len;
	int		str_i;

	i = 0;
	str_i = 0;
	new = NULL;
	if (size == 0)
		return (null_handler(new));
	new_len = get_len(size, strs, sep);
	new = (char *) malloc(sizeof(char) * new_len + 1);
	if (new == NULL)
		return (NULL);
	while (i < size)
	{
		ft_strcpy(new, strs[i], &str_i);
		if (i < size - 1)
			ft_strcpy(new, sep, &str_i);
		i++;
	}
	new[str_i] = '\0';
	return (new);
}
