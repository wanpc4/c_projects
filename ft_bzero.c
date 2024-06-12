/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:24:52 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/07 17:24:54 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"
/*
	void	ft_bzero(void *s, size_t n);
	Purpose: Set a block of memory to zero.
	*Flagged: For lack of understanding
*/
void	ft_bzero(void *s, size_t n)
{
	unsigned char *a;
	size_t count;

	a = s;
	count = 0;
	while (count < n)
	{
		a[count] = 0;
		count++;
	}
}
