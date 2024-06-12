/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:17:00 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/10 15:47:52 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t len_need;

	len_need = ft_strlen(needle);
	if (len_need == 0)
	{
		return ((char *)haystack);
	}
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
/*
#include <string.h>
int main()
{
	const char a[] = "My name is";
	const char b[] = "e ";
	size_t num = 1;

	printf("ft: %s, a: %p, b: %p\n", ft_strnstr(a,b,100),a,b);
	printf("ori: %s, a: %p, b: %p\n", strnstr(a,b,100),a,b);


	return (0);
}
*/