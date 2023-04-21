/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 21:44:58 by brpereir          #+#    #+#             */
/*   Updated: 2023/04/21 22:55:17 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
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
	return (j);
}

static char	*allocate(char const *s, int start, int finish)
{
	char			*copy;
	unsigned int	i;

	i = 0;
	copy = (char *)malloc(sizeof(char) * (finish - start));
	while (start < finish)
	{
		copy[i++] = s[start];
		start++;
	}
	copy[i] = 0;
	return (copy);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		start;

	start = 0;
	j = 0;
	i = word_count(s, c);
	arr = (char **)malloc(sizeof(char *) * i);
	if (!arr)
		return (NULL);
	arr[i] = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			arr[j] = allocate(s, start, i - 1);
			j++;
			start = i;
		}
		i++;
	}
	arr[j] = allocate(s, start, i);
	return (arr);
}

// int main(int argc, char **argv)
// {
// 	(void)argc;
// 	char **arr;

// 	arr = ft_split(argv[1], argv[2][0]);
// 	printf("%s", (arr[2]));

// 	return (0);
// }