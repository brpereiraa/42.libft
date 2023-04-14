/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:10:13 by brpereir          #+#    #+#             */
/*   Updated: 2023/04/14 19:49:47 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char *s1;
	char const *s2;

	if(!src && !dest )
		return (dest);
	s1 = (char *)dest;
	s2 = (char const *)src;
	i = 0;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}	

	return (dest);	
}
