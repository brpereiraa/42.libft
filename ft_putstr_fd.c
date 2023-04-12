/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 23:00:56 by brpereir          #+#    #+#             */
/*   Updated: 2023/04/12 23:00:56 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


ft_putchar_fd(char c);

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while(s[i] != 0)
		ft_putchar_fd(s[i++], fd);
}