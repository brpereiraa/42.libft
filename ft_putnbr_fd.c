/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 23:00:51 by brpereir          #+#    #+#             */
/*   Updated: 2023/04/12 23:00:51 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd_fd(char c, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	if(n == -2147483648)
	{
		ft_putchar_fd('-');
		ft_putchar_fd('2');
		ft_putnbr(147483648);
	}
	else if(n < 0)
	{
		ft_putchar_fd('-');
		n *= -1;
		ft_putnbr(n/10);
		ft_putchar_fd((n%10) + 48);
	}
	else if(n < 10)
	{
		ft_putchar_fd(n + 48);
	}
	else
	{
		ft_putnbr(n/10);
		ft_putchar_fd((n%10) + 48);
	}
}
