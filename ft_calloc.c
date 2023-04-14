/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:34:19 by brpereir          #+#    #+#             */
/*   Updated: 2023/04/14 18:21:43 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t n, size_t size)
{
	size_t	i;
	char *arr;

	i = 0;
	arr = malloc(n * size);
	while(i < n)
	{
		arr[i++] = 0;
	}
	arr[i] = 0;
	
	return (arr);
}
