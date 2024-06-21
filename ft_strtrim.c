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
int     is_char_there(char w, char const *word);

int     is_char_there(char w, char const *word)
{
    size_t count;

    count = 0;
    while (word[count] != '\0')
    {
        if (word[count] == w)
        {
            return (1);
        }
        count++;
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t count1; //Start of string
    size_t count2; //End of string
    size_t i;
    char   *str;

    if (s1 == NULL)
        return (NULL);
    while (s1[count1] != '\0' && is_char_there(s1[count1], set))
    {
        count1++;
    }
    count2 = ft_strlen(s1);
    while ((count1 < count2) && is_char_there(s1[count2 - 1], set))
    {
        count2--;
    }
    str = (char *) malloc((count2 - count1 + 1) * sizeof(*s1));
    if (str == NULL)
        return (NULL);
    while (count1 < count2)
    {
        str[i] = s1[count1];
        i++;
        count1++;
    }
    str[i] = '\0';
    return (str);
}
/*
int main()
{
    char *result;
    result = ft_strtrim(" Hello World! ", " ");
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
*/