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
#include <stdio.h>
#include "libft.h"
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *a;
	unsigned char replace;
	size_t count;

	a = s;
	replace = (unsigned char)c;
	count = 0;
	while (count < n)
	{
		a[count] = replace;
		count++;
	}
	return (s);
}
/*
int main()
{
	char str1[] = "Hello World";
	printf("Real:");
	printf("%s\n", str1);
	memset(str1, '+', 4);
	printf("%s\n", str1);

	char str2[] = "Hello World";
	printf("Remake:");
	printf("%s\n", str2);
	ft_memset(str2, '+', 4);
	printf("%s\n", str2);
	return 0;
}
*/