/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:26:03 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/07 17:26:05 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"
/*
	void	*ft_memset(void *b, int c, size_t len)
	Purpose: To fill a block of memory with a particular value.
	*Flagged: For lack of understanding
*/
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *a;
	unsigned char replace;
	size_t count;

	a = b;
	//To convert int to char data type
	replace = (unsigned char)c;
	count = 0;
	while (count < len)
	{
		a[count] = replace;
		count++;
	}
	return (a);
}
