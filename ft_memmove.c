/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:25:54 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/07 17:25:57 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"
/*
	void	*ft_memmove(void *dst, const void *src, size_t len);
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dest;
	const char *source;
	size_t length;

	dest = dst;
	source = src;
	length = 0;
	//If both source and destination are the same:
	if (*source == *dest)
	{
		return (dst);
	}
	//Comparing memory addresses 
	if (*dest < *source)
	{
		while (length < len)
		{
			dest[length] = source[length];
			length++;
		}
	}
	else
	{
		while (length < len)
		{
			dest[len] = source[len];
			len--;
		}
	}
	return (dst);
}
