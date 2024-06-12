/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:25:03 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/07 17:25:06 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
/*
	int ft_isascii(int c);
	Purpose: To identify if the number is included in ASCII table.
*/
int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
	{
		return (0); //False
	}
	return (1); //True
}
