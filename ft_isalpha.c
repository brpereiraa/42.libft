/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 19:48:37 by brpereir          #+#    #+#             */
/*   Updated: 2023/04/11 19:51:48 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c > 'a' && c < 'z' || c > 'A' && c < 'Z')
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("%i", ft_isalpha(c));
// 	return (0);
// }
