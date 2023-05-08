/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:57:15 by djin              #+#    #+#             */
/*   Updated: 2023/05/08 12:47:33 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnumber(char *buffer, long n)
{
	int		i;
	long	temp;

	temp = n;
	i = 0;
	if (n == 0)
		buffer[i++] = '0';
	if (n < 0)
		n *= -1;
	while (n)
	{
		buffer[i++] = n % 10 + '0';
		n = n / 10;
	}
	if (temp < 0)
		buffer[i++] = '-';
	buffer[i] = '\0';
}

void	ft_reverseprint(char *result, char *buffer)
{
	int	length;
	int	i;

	length = ft_strlen(buffer);
	i = 0;
	while (length--)
		result[i++] = buffer[length];
	result[i] = '\0';
}

char	*ft_itoa(int n)
{
	char	buffer[6498];
	char	*result;

	ft_putnumber(buffer, n);
	result = malloc(sizeof(char) * (ft_strlen(buffer) + 1));
	ft_reverseprint(result, buffer);
	printf("%s", result);
	return (NULL);
}

// int	main(void)
// {
// 	ft_itoa(-2147483648);
// }
