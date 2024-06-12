/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:24:41 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/10 20:15:58 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str); //To convert char to int value.

int	ft_atoi(const char *str)
{
	int	count;
	int	sign;
	int	converter;

	count = 0;
	sign = 1;
	converter = 0;
	if (str[count] == '+')
		count++;
	else if (str[count] == '-')
	{
		sign = -1;
		count++;
	}
	while ((str[count] == 32) || (str[count] >= 9 && str[count] <= 13))
	{
		count++;
	}
	while ((str[count] >= '0') && (str[count] <= '9'))
	{
		converter = (converter * 10) + (str[count] - '0');
		count++;
	}
	return (converter * sign);
}

int main()
{
    char num[20] = "+0123456789";

    printf("Real: %d\n", atoi(num));
    printf("Remake: %d\n", ft_atoi(num));
    return (0);
}