/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 15:45:43 by djin              #+#    #+#             */
/*   Updated: 2023/04/30 16:58:49 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *ptr, int ch, size_t count)
{
	unsigned int		i;
	unsigned char		*char_ptr;

	char_ptr = ((unsigned char *)ptr);
	i = 0;
	if (!char_ptr)
		return (NULL);
	while (i < count)
	{
		if (char_ptr[i] == ch)
			return ((void *)ptr + i);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	ptr[] = "My Name is Lucas";
	int	ch = '\0';
	printf("%s\n", ft_memchr(ptr, ch, 0));
}*/