/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:39:31 by mbrandao          #+#    #+#             */
/*   Updated: 2023/09/24 13:48:00 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	char_check(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while ((str[i] != 0) && char_check(str[i], charset))
			i++;
		if (str[i])
			words++;
		while ((str[i] != 0) && !(char_check(str[i], charset)))
			i++;
	}
	return (words);
}

int	get_bigg(char *str, char *charset)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	j = 1;
	while (str[i])
	{
		if (char_check(str[i], charset) || str[i + 1] == 0)
		{
			if (j > k)
				k = j;
			j = 0;
		}
		i++;
		j++;
	}
	return (k);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		x;
	char	**tab;

	tab = (char **) malloc((count_words(str, charset) + 1) * sizeof(char *));
	i = 0;
	j = 0;
	x = 0;
	while (i < count_words(str, charset))
	{
		tab[i] = (char *) malloc(get_bigg(str, charset) + 1 * sizeof(char));
		while (char_check(str[j], charset) && str[j] != 0)
			j++;
		while (!char_check(str[j], charset) && str[j] != 0)
			tab[i][x++] = str[j++];
		tab[i][x] = '\0';
		x = 0;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

/*
int	main(int argc, char *argv[])
{
	(void) argc;
	int i = 0;
	char **tab;

	tab = ft_split(argv[1], argv[2]);
	while (tab[i])
	{
		printf("%s\n", tab[i++]);
	}
}*/
