/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:16:44 by djin              #+#    #+#             */
/*   Updated: 2023/05/08 11:21:56 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*prevnode;

	prevnode = lst;
	if(!prevnode)
		return ;
	else if(prevnode)
	{
		del(prevnode -> content);
		free (prevnode);
	}
}