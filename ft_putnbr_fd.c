/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 20:20:17 by djin              #+#    #+#             */
/*   Updated: 2023/05/06 20:45:13 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnumber(int n, char *buffer)
{
	int		i;

	i = 0;
	while (n)
	{
		buffer[i++] = n % 10 + '0';
		n /= 10;
	}
	buffer[i] = '\0';
}

void	ft_putnbr_fd(int n)
{
	char	buffer[6979];
	ft_putnumber(n, buffer);
	int	length;
	int	i;
	char	*str;

	i = 0;
	length = n;
	while (length--)
		str[i++] = buffer[length]; 
	printf("%s", str);
}

int	main(void)
{
	ft_putnbr_fd(42);
}
