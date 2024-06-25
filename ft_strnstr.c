/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:17:00 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/25 15:41:23 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_need;

	if (len == 0)
		return ((char *)haystack);
	len_need = ft_strlen(needle);
	if (len_need == 0)
		return ((char *)haystack);
	while ((*haystack) && (len >= len_need))
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, len_need) == 0)
		{
			return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
