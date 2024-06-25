/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:27:05 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/25 15:38:05 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t count_dst;
	size_t count_src;
	size_t length;

	count_dst = 0;
	count_src = 0;
	while (count_dst < dstsize && dst[count_dst] != '\0')
		count_dst++;
	while (src[count_src] != '\0')
		count_src++;
	length = count_dst + count_src;
	if (count_dst < dstsize)
	{
		size_t count;

		count = count_dst;
		while (count < dstsize - 1 && *src != '\0')
		{
			dst[count] = *src;
			count++;
			src++;
		}
		dst[count] = '\0';
	}
	else
	{
		length = dstsize + count_src;
	}
	return (length);
}