/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:27:14 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/07 17:27:16 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"
/*
	size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
	***Flagged***
*/
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t count;

	count = 0;
	while ((src[count] != '\0') && (count + 1 < dstsize))
	{
		dst[count] = src[count];
		count++;
	}

	if (dstsize > 0)
	{
		dst[count] = '\0';
	}

	while (src[count] != '\0')
	{
		count++;
	}
	return (count);
}
