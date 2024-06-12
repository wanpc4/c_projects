/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:08:01 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/07 17:08:03 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	size_t	ft_strlen(const char *s);
	Purpose: To count how many characters are there in the string.
*/
size_t	ft_strlen(const char *s)
{
	unsigned int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}