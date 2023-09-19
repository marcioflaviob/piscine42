/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:57:47 by mbrandao          #+#    #+#             */
/*   Updated: 2023/09/18 12:45:04 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalphanumeric(char c)
{
	int	i;

	i = 0;
	if ((c > 57) && (c < 65))
		return (0);
	else if ((c > 90) && (c < 97))
		return (0);
	else if ((c < 48) || (c > 122))
		return (0);
	return (1);
}

int	ft_is_uppercase(char c)
{
	if ((c < 65) || (c > 90))
		return (0);
	return (1);
}

int	ft_is_lowercase(char c)
{
	if ((c < 97) || (c > 122))
		return (0);
	return (1);
}

char	ft_capitalize(char c)
{
	char	x;

	x = c - 32;
	return (x);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_uppercase(str[i]) == 1)
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	if (ft_is_lowercase(str[i]) == 1)
		str[i] = ft_capitalize(str[i]);
	i++;
	while (str[i] != '\0')
	{
		if (ft_isalphanumeric(str[(i - 1)]) == 0)
		{
			if ((ft_isalphanumeric(str[i]) == 1)
				&& (ft_is_lowercase(str[i]) == 1))
				str[i] = ft_capitalize(str[i]);
		}
		i++;
	}
	return (str);
}

/*int main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}*/
