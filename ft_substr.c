/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 23:02:15 by brpereir          #+#    #+#             */
/*   Updated: 2023/04/12 23:02:16 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = 0;
	while (s[k++] && i < len)
		i++;
	str = (char *)malloc(sizeof(char) * i);
	while (j < i)
	{
		str[j++] = s[start++]; 
	}
	str[j] = 0;
	return (str);
}
