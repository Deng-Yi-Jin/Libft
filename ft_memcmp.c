/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 16:58:38 by djin              #+#    #+#             */
/*   Updated: 2023/05/06 21:43:13 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t count)
{
	unsigned int	i;
	char			*s1;
	char			*s2;

	s1 = ((char *)str1);
	s2 = ((char *)str2);
	i = 0;
	if (!s1)
		return ('\0');
	if (count == 0)
		return (0);
	while (i < (count))
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	char	s1[] = "Hello";
// 	char	s2[20] = "Yello";
// 	unsigned int	i = 3;

// 	printf("%d\n", ft_memcmp(s1, s2, i));
// }