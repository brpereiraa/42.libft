/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:10:13 by brpereir          #+#    #+#             */
/*   Updated: 2023/04/11 20:10:38 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*memcpy(void *dest, const void *src, size_t n)
{
	const char	*s1;
	const char	*s2;
	size_t		i;

	i = 0;
	while (i < n)
	{
		(char *)dest[i] = src[i];
	}	
}
