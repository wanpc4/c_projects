/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:33:34 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/07 17:33:37 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
    int ft_memcmp(const void *s1, const void *s2, size_t n);
*/
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char *stmt_1;
    char *stmt_2;
    size_t count;

    stmt_1 = (char *)s1;
    stmt_2 = (char *)s2;
    count = 0;
    while (count < n)
    {
        if (stmt_1[count] != stmt_2[count])
        {
            return (((unsigned char)stmt_1[count]) - ((unsigned char)stmt_2[count])); //If they are not identical
        }
        count++;
    }
    return (0);
}