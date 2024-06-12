/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:29:51 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/12 11:04:37 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"
/*
	char	*ft_strrchr(const char *s, int c);
*/
char	*ft_strrchr(const char *s, int c)
{
	const char *a;
	const char *lastOccurrence;

	a = s;
	lastOccurrence = NULL;
	while (*a != '\0')
	{
		if (*a == c)
		{
			lastOccurrence = a;
		}
		a++;
	}
	return ((char *)lastOccurrence);
}
