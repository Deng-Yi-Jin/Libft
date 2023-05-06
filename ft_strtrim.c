/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:34:44 by djin              #+#    #+#             */
/*   Updated: 2023/05/03 18:03:55 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_chr_in_set(char const str, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == str)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;
	size_t	i;
	char	*str;

	first = 0;
	i = 0;
	last = ft_strlen(s1);
	str = malloc(sizeof(char) * (last - first + 1));
	while (s1[first] && ft_chr_in_set(s1[first], set))
		first++;
	while ((last > first) && ft_chr_in_set(s1[last - 1], set))
		last--;
	if (!str)
		return (NULL);
	while (last > first)
		str[i++] = s1[first++];
	str[i] = 0;
	return (str);
}

/*int	main(void)
{
	char	str[] = "Hello There";

	printf("%s\n", ft_strtrim(str, " HelroTh"));
}*/