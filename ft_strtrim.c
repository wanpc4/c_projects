/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 07:16:32 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/12 11:51:04 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set);

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    size_t  count_1;
    size_t  count_2;
    size_t  i;

    count_1 = 0;
    count_2 = 0;
    i = 0;

    while (s1[count_1] && ft_strchr(set, s1[count_1]))
    {
        count_1++;
    }
    count_2 = ft_strlen(s1) - 1;
    while (count_2 > count_1 && ft_strchr(set, s1[count_2]))
    {
        count_2--;
    }
    str = (char *) malloc((count_2 - count_1 + 2) * sizeof(char));
    if (!str)
    {
        return (NULL);
    }

    while (count_1 <= count_2)
    {
        str[i++] = s1[count_1++];
    }
    str[i] = '\0';
    return (str);
}

int main()
{
    char *result = ft_strtrim("Hello world!","Hello ");
    printf("%s\n", result);
    free(result);
    return (0);
}