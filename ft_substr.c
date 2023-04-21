/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 23:02:15 by brpereir          #+#    #+#             */
/*   Updated: 2023/04/21 22:51:59 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int length;
	unsigned int k;
	char *str;
	
	i = 0;
	length = 0;
	k = ft_strlen(s);
	while(length < len && s[length])
		length++;
	str = (char *)malloc(sizeof(char) * (length) + 1);
	if(start >= k)
	{
		str[i] = '\0';
		return (str);
	}
	if(!str)
		return (NULL);
	while(s[i] && i < length)
	{
		str[i++] = s[start++];
	}
	str[i] = '\0';
	return (str);
}
