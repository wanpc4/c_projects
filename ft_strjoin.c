/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:45:18 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/12 10:44:29 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

//The prototype
char *ft_strjoin(char const *s1, char const *s2);

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *results;
    size_t  count_1;
    size_t  count_2;
    size_t  i;

    count_1 = 0;
    count_2 = 0;
    while (s1[count_1] != '\0')
    {
        count_1++;
    }
    while (s2[count_2] != '\0')
    {
        count_2++;
    }
    results = (char *) malloc((count_1 + count_2 + 1) * sizeof(char));
    i = 0;
    while (i < count_1)
    {
        results[i] = s1[i];
        i++;
    }
    i = 0; //Reset the value 'i'
    while (i < count_2)
    {
        results[i + count_1] = s2[i];
        i++;
    }
    results[count_1 + count_2] = '\0';
    return (results);
}

int main()
{
    char * results = ft_strjoin("Hello ","World");
    printf("Results: %s\n", results);
    free(results);
    return (0);
}