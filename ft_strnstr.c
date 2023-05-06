/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 17:23:57 by djin              #+#    #+#             */
/*   Updated: 2023/04/30 21:58:29 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*str, const char *to_find, size_t len)
{
	unsigned int	i;
	unsigned int	o;

	i = 0;
	while (str[i] != '\0' && i < len)
	{
		o = 0;
		while (to_find[o])
		{
			if (str[i + o] == to_find[o] && ((i + o) < len))
			{
				o++;
				if (!to_find[o])
					return ((char *)str + i);
			}
			else
				break ;
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	str[] = "th the nuts";
	char	tofind[] = "the";
	unsigned int	i = 6;

	char	*cmb = strnstr(str, tofind, i);

	printf ("%s", cmb);
}*/