/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 23:01:56 by brpereir          #+#    #+#             */
/*   Updated: 2023/04/12 23:01:56 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnew(size_t size)
{
	int	i;
	char* str;
	
	str = malloc(sizeof(char *) *  size);
	i = 0;
	while(i < size)
		str[i++] = 0;
}