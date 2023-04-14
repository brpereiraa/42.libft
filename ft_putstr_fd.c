/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 23:00:56 by brpereir          #+#    #+#             */
/*   Updated: 2023/04/14 18:14:29 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while(s[i] != 0)
		ft_putchar_fd(s[i++], fd);
}