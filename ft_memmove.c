/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 22:42:01 by djin              #+#    #+#             */
/*   Updated: 2023/05/09 13:31:45 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	char			*char_dest;
	char			*char_src;

	char_dest = (char *)dest;
	char_src = (char *)src;
	while (count--)
		char_dest[count] = char_src[count];
	return (dest);
}

// int	main(void)
// {
// 	char	dest[50] = "World";
// 	char	src[50] = "Hello World";
// 	ft_memmove(dest, src, 5);
// 	printf("%s", dest);
// }