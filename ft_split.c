/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:19:49 by djin              #+#    #+#             */
/*   Updated: 2023/05/03 18:41:22 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_count_words(char const *s, char c, int *count)
{
	int	i;
	int	j;

	*count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i])
		{
			if (s[i] != c)
				break ;
			i++;
		}
		j = 0;
		while (s[i])
		{
			if (c == s[i])
				break ;
			i++;
		}
		if (i > j)
			(*count)++;
	}
}

void	ft_strbuffer(int *j, int *index, char **mstr, char *buffer)
{
	if (*j > 0)
	{
		buffer[*j] = '\0';
		mstr[*index] = malloc(sizeof(char) * (*j + 1));
		ft_strlcpy(mstr[*index], buffer, (*j + 1));
		(*index)++;
	}
}

void	ft_place_word(char const *s, char c, char **mstr, int *index)
{
	int		i;
	int		j;
	char	buffer[8758];

	i = 0;
	while (s[i])
	{
		while (s[i])
		{
			if (s[i] != c)
				break ;
			(i)++;
		}
		j = 0;
		while (s[i])
		{
			if (s[i] == c)
				break ;
			buffer[j++] = s[i++];
		}
		ft_strbuffer(&j, index, mstr, buffer);
	}
}

char	**ft_split(char const *s, char c)
{
	int		count;
	int		index;
	char	**mstr;

	count = 0;
	ft_count_words(s, c, &count);
	mstr = malloc(sizeof(char *) * count);
	index = 0;
	ft_place_word(s, c, mstr, &index);
	return (mstr);
}

// int	main(void)
//  {
//  	char	**result = ft_split("Hello a voy", ' ');
//  	int		i;

//  	i = 0;
//  	while (result[i])
//  	{
//  		printf("%s", result[i]);
//  		i++;
//  	}
//  }

int	main()
{
	char	**result = ft_split("Can You Split At Every Sp ace", ' ');
	int i = 0;
	while(i < 7)
	{
		printf(i? ", %s" : "%s", result[i]);
		i++;
	}
}
