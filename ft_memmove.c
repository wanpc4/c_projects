/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:25:54 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/25 16:00:41 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *dest;
	const char *source;
	size_t length;
	
	dest = dst;
	source = src;
	if (dst == NULL || src == NULL)
		return (NULL);
	if (dst < src)
	{
		length = 0;
		while (length < len)
		{
			dest[length] = source[length];
			length++;
		}
	}
	else if (dst > src)
	{
		length = len;
		while (length > 0)
		{
			dest[length - 1] = source[length - 1];
			length--;
		}
	}
	return (dst);
}
