/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:17:00 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/26 02:46:32 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*x;
	const char	*y;
	size_t		z;

	x = (const char *)haystack;
	y = (const char *)needle;
	z = 0;
	if (!y[0])
		return ((char *)x);
	if (!len)
		return (0);
	if (*y == '\0')
		return ((char *)x);
	while (*haystack != '\0' && z <= len - ft_strlen(y))
	{
		if (ft_strncmp(x, y, ft_strlen(y)) == 0)
		{
			return ((char *)x);
		}
		z++;
		x++;
	}
	return (NULL);
}
