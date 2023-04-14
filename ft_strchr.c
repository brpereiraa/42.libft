/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 21:50:17 by brpereir          #+#    #+#             */
/*   Updated: 2023/04/14 19:52:01 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(str[i] == c)
			return (&str[i]);
		i++;
	}
	return (0);
}