/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:18:42 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/25 23:18:56 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	count_1;
	size_t	count_2;
	char	*result;
	size_t	i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	count_1 = ft_strlen(s1);
	count_2 = ft_strlen(s2);
	result = (char *) malloc((count_1 + count_2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < count_1)
	{
		result[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < count_2)
	{
		result[i + count_1] = s2[i];
		i++;
	}
	result[count_1 + count_2] = '\0';
	return (result);
}
