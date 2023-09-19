/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:42:03 by mbrandao          #+#    #+#             */
/*   Updated: 2023/09/13 22:33:14 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*str != '\0')
	{
		size++;
		str++;
	}
	return (size);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	dest_len;
	int	src_len;
	int	int_size;
	int	space_left;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	int_size = (int) size;
	if (int_size <= dest_len)
		return (int_size + src_len);
	space_left = int_size - (dest_len - 1);
	dest = ft_strncat(dest, src, space_left);
	dest[int_size - 1] = '\0';
	return (dest_len + src_len);
}
