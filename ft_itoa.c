/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 06:59:39 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/25 16:49:48 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_nbrlen(int n)
{
	size_t len;
	unsigned int num;

	len = 1;
	if (n < 0)
		num = -n;
	else
	{
		num = n;
	}
	while (num >= 10)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	unsigned int	num;

	len = ft_nbrlen(n);

	if (n < 0)
		num = -n;
	else 
	{
		num = n;
	}
	if (n < 0)
		len++;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';

	if (n < 0)
		str[0] = '-';
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		str[--len] = '0' + (num % 10);
		num /= 10;
	}
	return (str);
}
