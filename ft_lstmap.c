/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 22:00:21 by brpereir          #+#    #+#             */
/*   Updated: 2023/04/23 22:14:36 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *node;
	t_list *pointer;

	node = (t_list *)malloc(sizeof(t_list));
	pointer = node;	
	if(!lst)
		return (NULL);
	while(lst->next)
	{
		node = f(node->content);
		node = node->next;
		del(node->content);
		lst = lst->next;
	}
	node = f(node->content);
	del(node->content);
	return (pointer);
}