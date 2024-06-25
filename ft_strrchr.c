/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:29:51 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/25 15:24:34 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*a;
	const char	*lastoccurrence;

	a = s;
	lastoccurrence = NULL;
	while (*a != '\0')
	{
		if (*a == c)
			lastoccurrence = a;
		a++;
	}
	if (*a == c)
	{
		return ((char *)a);
	}
	return ((char *)lastoccurrence);
}
