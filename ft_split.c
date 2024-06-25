/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 08:25:00 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/25 08:26:07 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    **ft_split(char const *s, char c);

char    **ft_split(char const *s, char c)
{

}

/*
    1. Allocation for Array of Strings: We need to first determine how many splits will 
    occur to allocate the correct number of pointers.

    2. Copy and Modify the Input String: We should avoid modifying the input string directly. 
    Instead, we can use a temporary string for manipulation.
    
    3. Splitting the String: We will split the string based on the delimiter and store each 
    split string in the array.

    4. Memory Management: Ensure proper memory allocation and deallocation to avoid leaks.
*/
