/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 21:44:58 by brpereir          #+#    #+#             */
/*   Updated: 2023/04/11 23:29:14 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int wordCount(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			j++;
		i++;
	}
	j++;
}

char *allocate(char *s, int start, int finish)
{
	char	*copy;
	unsigned int	i;
	
	copy = (char *)malloc(sizeof(char) * (finish-start))
	while (start < finish )
	{
		copy[i++] =  s[start];
		start++;
	}
	return (copy);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		start;
	int		finish;

	start = 0;
	wordCount(&s, c);
	**arr = (char **)malloc(sizeof(char*) * j)
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			j++;
		i++;
	}
}