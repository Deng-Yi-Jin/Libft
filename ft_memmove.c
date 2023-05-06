/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 22:42:01 by djin              #+#    #+#             */
/*   Updated: 2023/04/29 13:48:55 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	unsigned int	i;
	char			*char_dest;
	char			*char_src;
	char			*temp;

	temp = malloc (sizeof(char) * count);
	char_dest = (char *)dest;
	char_src = (char *)src;
	if (!char_dest || !char_src)
		return (NULL);
	i = 0;
	while (i < count)
	{
		temp[i] = char_src[i];
		i++;
	}
	i = 0;
	while (i < count)
	{
		char_dest[i] = temp[i];
		i++;
	}
	free (temp);
	return (dest);
}

/*int	main(void)
{
	char src[] = {'H', 'E', 'L', 'L', 'O', '\0'};
	
	ft_memmove(src + 2, src, 5);
	printf("%s", src);
}*/