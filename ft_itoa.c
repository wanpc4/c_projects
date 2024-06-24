/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 06:59:39 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/19 07:00:03 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int n);

char *ft_itoa(int n)
{
    char    *number;
    int     count;
    int     temp;

    temp = n;
    if (n < 0)
        count = 0;
    else
    {
        count = -1;
    }
    while (temp != 0)
    {
        count++;
        temp /= 10;
    }
    number = (char *) malloc((count + 1) * sizeof(char));
    if (number == NULL)
        return (NULL);
    if (n == 0)
    {
        number[0] = '0';
        return (number);
    }
    number[count + 1] = '\0';
    if (n < 0)
    {
        number[0] = '-';
        n = -n;
    }
    while (n != 0)
    {
        number[count] = '0' + (n % 10);
        count--;
        n /= 10;
    }
    return (number);
}

int main()
{
    char *result;
    result = ft_itoa(2147483647);
    if (result != NULL)
    {
        printf("%s\n", result);
        free(result);
    }
    return 0;
}
