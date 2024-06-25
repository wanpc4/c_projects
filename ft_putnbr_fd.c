/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 07:25:16 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/25 16:36:56 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <limits.h>

void	ft_putnbr_fd(int n, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == INT_MIN)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	c = '0' + (n % 10);
	write(fd, &c, 1);
}

/*
void	ft_putnbr_fd(int n, int fd)
{
	int	converter;
	int	negative;

	converter = '0' + (n % 10);
	if (n >= 0 && n <= 9)
		write(fd, &converter, 1);
	else if (n >= -9 && n < 0)
	{
		write(fd, "-", 1);
		negative = '0' + (-n % 10);
		write(fd, &negative, 1);
	}
	else if (n > 9 && n <= INT_MAX)
	{
		ft_putnbr_fd(n / 10, fd);
		write(fd, &converter, 1);
	}
	else if (n >= INT_MIN && n < -9)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-n / 10, fd);
		negative = '0' + (-n % 10);
		write(fd, &negative, 1);
	}
}
*/
