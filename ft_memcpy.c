/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:25:43 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/07 17:25:45 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"
/*
	void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
*/
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *dest;
	const char *source;
	size_t count;

	dest = dst;
	source = src;
	count = 0;
	while (count < n)
	{
		dest[count] = source[count];
		count++;
	}
	return (dest);
}
