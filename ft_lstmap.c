/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:32:12 by djin              #+#    #+#             */
/*   Updated: 2023/05/08 11:58:59 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_if(temp, newnode, lst)
{
		if(temp == 0)
		{
			lst = newnode;
			temp = newnode;
		}
		else
		{
			temp -> next = newnode;
			temp = newnode;
		}
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*pnode;
	t_list	*temp;
	t_list	*newnode;

	temp = 0;
	pnode = 0;
	while (lst != 0)
	{
		pnode = lst;
		lst -> content = f(temp -> content);
		newnode = malloc(sizeof(t_list));
		newnode -> content = lst -> content;
		newnode -> next = 0;
		ft_if(temp, newnode, lst);
		lst = lst -> next;
		free (pnode);
	}
	return (temp);
}
