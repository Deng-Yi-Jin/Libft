/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:22:26 by djin              #+#    #+#             */
/*   Updated: 2023/05/08 12:53:02 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*newnode;
	t_list	*prevnode;

	prevnode = lst;
	while (*lst || lst)
	{
		newnode = (*lst)->next;
		if (!prevnode)
			return ;
		else if (prevnode)
		{
			del(prevnode -> content);
			free (prevnode);
		}
		*lst = newnode;
	}
}
