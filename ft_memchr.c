/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:25:35 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/07 17:25:37 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	void	*ft_memchr(const void *s, int c, size_t n);
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	const char *a;
	unsigned char letter;
	size_t count;

	a = s;
	letter = (unsigned char)c;
	count = 0;
	while (count < n)
	{
		if (a[count] == letter)
		{
			return ((void *)(a + count));
		}
		count++;
	}
	return (NULL);
}
