/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:52:20 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/12 07:12:50 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	count;

	count = 0;
	str = (char *) malloc((len + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	while ((s[count + start] != '\0') && (count < len))
	{
		str[count] = s[start + count];
		count++;
	}
	str[count] = '\0';
	return (str);
}
/*
int main()
{
    char *str = ft_substr("Hello, World!", 0, 5);
    printf("%s\n", str);
    free(str);
    return (0);
}
*/
