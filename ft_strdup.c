/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 08:45:21 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/20 08:45:24 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(const char *s1);

char    *ft_strdup(const char *s1)
{
    char    *str;
    size_t  count;
    size_t  i;

    count = 0;
    while (s1[count] != '\0')
    {
        count++;
    }
    str = (char *) malloc((count + 1) * sizeof(char));
    if (str == NULL)
        return (NULL);
    i = 0;
    while (i < count)
    {
        str[i] = s1[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

int main()
{
    char word[10] = "hahaha";
    char *result = ft_strdup(word);
    printf("%s\n", result);
    free(result);
    return (0);
}