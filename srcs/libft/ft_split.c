/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:44:30 by joaocharneca      #+#    #+#             */
/*   Updated: 2021/12/21 19:41:57 by jde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		while (s[i] != c && s[i] != '\0')
			i++;
		count++;
	}
	return (count);
}

char	**ft_array(char **array, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	beg;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			beg = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			array[j] = ft_substr(s, beg, i - beg);
			j++;
		}
		else
			i++;
	}
	array[j] = 0;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (array == NULL)
		return (NULL);
	return (ft_array(array, s, c));
}

/*
static int	unleah(char **str, int size)
{
	while (size--)
		free(str[size]);
	return (-1);
}

static int	count_words(const char *str, char charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i + 1] == charset || str[i + 1] == '\0') == 1
			&& (str[i] == charset || str[i] == '\0') == 0)
			words++;
		i++;
	}
	return (words);
}

static void	write_word(char *dest, const char *from, char charset)
{
	int	i;

	i = 0;
	while ((from[i] == charset || from[i] == '\0') == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

static int	write_split(char **split, const char *str, char charset)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == charset || str[i] == '\0') == 1)
			i++;
		else
		{
			j = 0;
			while ((str[i + j] == charset || str[i + j] == '\0') == 0)
				j++;
				split[word] = (char *)malloc(sizeof(char) * (j + 1));
			if (split[word] == NULL)
				return (unleah(split, word - 1));
			write_word(split[word], str + i, charset);
			i += j;
			word++;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;

	words = count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (res == NULL)
		return (NULL);
	res[words] = 0;
	if (write_split(res, s, c) == -1)
		return (NULL);
	return (res);
}
*/
