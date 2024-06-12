/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:26:12 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/12 11:18:29 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"
/*
	char	*ft_strchr(const char *s, int c);
	(First occurrence)
	Flagged: For lack of understanding
*/
char	*ft_strchr(const char *s, int c)
{
	const char *str;

	str = s;
	while (*str != '\0')
	{
		if (*str == c)
		{
			return ((char *)str);
		}
		str++;
	}
	return (NULL);
}
