/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 07:27:43 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/20 08:41:42 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char    *ft_strtrim(char const *s1, char const *set);

char    *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    size_t count;

    while ((s1[count] != '\0') && (set[count] != '\0'))
    {
        if (s1[count] == set[count])
            count++;
        count++;
    }
}

int main()
{
    char *result;
    result = ft_strtrim("Hello World!", "World!");
    if (result != NULL)
    {
        printf("%s\n", result);
        free(result);
    }
    else
    {
        return (1);
    }
    return (0);
}
