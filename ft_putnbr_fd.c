/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 20:20:17 by djin              #+#    #+#             */
/*   Updated: 2023/05/08 12:25:05 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnumber(long n, char *buffer)
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
		n /= 10;
	}
	if (temp < 0)
		buffer[i++] = '-';
	buffer[i] = '\0';
}

void	ft_reverse_print(char *str, char *buffer, long i)
{
	int	length;

	length = ft_strlen(buffer);
	while (length--)
		str[i++] = buffer[length];
}

void	ft_putnbr_fd(int n, int fd)
{
	char	buffer[12];
	char	str[12];
	int		i;

	i = 0;
	ft_putnumber(n, buffer);
	ft_reverse_print(str, buffer, i);
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}

// int	main(void)
// {
// 	ft_putnbr_fd(2147483647, 1);
// }
