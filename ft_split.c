/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 21:44:58 by brpereir          #+#    #+#             */
/*   Updated: 2023/04/23 17:18:59 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	flag;

	i = 0;
	j = 0;
	flag = 1;
	while (s[i])
	{
		if (s[i] != c && flag)
		{
			flag = 0;
			j++;
		}
		else if (s[i] == c)
			flag = 1;
		i++;
	}
	j++;
	return (j);
}

static int	letters_in_word(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		flag;
	int		word;

	j = 0;
	i = 0;
	flag = -1;
		word = word_count(s, c);
	arr = (char **)malloc(sizeof(char *) * (word));
	if (!arr)
		return (NULL);
	while (++flag < word - 1)
	{
		while (s[i] == c)
			i++;
		arr[j] = ft_substr(s, i, letters_in_word(s, c, i));
		if (!arr[j++])
			return (NULL);
		i += letters_in_word(s, c, i);
	}
	arr[j] = NULL;
	return (arr);
}
