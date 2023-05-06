/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 21:33:26 by djin              #+#    #+#             */
/*   Updated: 2023/04/29 13:49:27 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned int	i;
	char			*char_dest;
	char			*char_src;

	char_dest = (char *)dest;
	char_src = (char *)src;
	i = 0;
	if (!char_dest)
		return (NULL);
	while (i < count)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	source[] = "Lol";
	char	destination[] = "ByeZ";
	
	printf("%s", ft_memcpy(destination, source, sizeof(source)));
}*/