/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 07:01:05 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/19 07:07:21 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	count;
	size_t	i;
	char	*str;

	count = ft_strlen(s);
	if (s == NULL || f == NULL)
		return (NULL);
	str = (char *) malloc((count + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < count)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
