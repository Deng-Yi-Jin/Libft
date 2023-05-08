/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:19:49 by djin              #+#    #+#             */
/*   Updated: 2023/05/08 23:12:58 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	check_seperator(char str, char c)
{
	if (str == c)
		return (true);
	return (false);
}

static int	count_strings(char *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && check_seperator(*str, c))
			str++;
		if (*str)
			count++;
		while (*str && !check_seperator(*str, c))
			str++;
	}
	return (count);
}

static int	ft_len(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && !check_seperator(str[i], c))
		i++;
	return (i);
}

static char	*print_words(char *str, char c)
{
	int	i;
	int	len;
	char	*word;

	i = 0;
	len = ft_len(str, c);
	word = (char *)malloc((len + 1) * 1);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	char	*str;
	char	**arr;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)s;
	arr = (char **)malloc((count_strings(str, c) + 1) * sizeof(void *));
	while (*str)
	{
		while(*str && check_seperator(*str, c))
			str++;
		if (*str)
		{
			arr[i] = print_words(str, c);
			i++;
		}
		while (*str && !check_seperator(*str, c))
			str++;
	}
	arr[i] = 0;
	return (arr);
}

#include <stdio.h>

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

// int	main(void)
// {
// 	char	**result = ft_split("Can You Split At Every Sp ace", ' ');
// 	int i = 0;
// 	while(i < 7)
// 	{
// 		printf(i? ", %s" : "%s", result[i]);
// 		i++;
// 	}
// }
