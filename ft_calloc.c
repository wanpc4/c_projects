/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 08:45:07 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/20 13:53:14 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size);

void	*ft_calloc(size_t count, size_t size)
{
	void	*allocate;
	size_t	countandsize;

	if ((count != 0) && (size != 0) && (count > SIZE_MAX / count))
		return (NULL);
	countandsize = (count * size);
	allocate = malloc(countandsize);
	if (allocate == NULL)
		return (NULL);
	else
	{
		ft_bzero(allocate, countandsize);
	}
	return (allocate);
}
/*
int main()
{
    int *students;
    int numStudents = 12;
    students = ft_calloc(numStudents, sizeof(*students));
    printf("%lu", numStudents * sizeof(*students));
    return (0);
}
*/
