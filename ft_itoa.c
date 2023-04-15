/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 21:50:11 by brpereir          #+#    #+#             */
/*   Updated: 2023/04/15 06:24:04 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(int n)
{
	int	count;

	count = 0;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		num;
	char	*c;

	num = count(n);
	c = (char *)malloc(sizeof(char) * (num + 1));
	c[num--] = '\0';
	while (n)
	{
		c[num--] = (n % 10) + 48;
		n /= 10;
	}
	return (c);
}
