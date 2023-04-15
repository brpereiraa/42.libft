/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 21:45:01 by brpereir          #+#    #+#             */
/*   Updated: 2023/04/15 19:43:34 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *needle, char *haystack, int n)
{
	int	i;
	int	j;

	i = 0;
	while (haystack[i] && i < n)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
