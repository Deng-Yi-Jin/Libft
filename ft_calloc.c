/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:58:29 by djin              #+#    #+#             */
/*   Updated: 2023/04/30 22:14:10 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;
	int		i;

	ptr = (char *)malloc (num * size);
	while (i < size)
	{
		*((char *)ptr + i) = 0;
		i++;
	}
	return (ptr);
}
