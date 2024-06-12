/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:07:45 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/07 17:07:49 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    int ft_isalnum(int c);
	Purpose: To identify if they are alphanumeric (lowercase/uppercase) and numbers.
*/
int	ft_isalnum(int c)
{
	if ((c < 48 || c > 57) && (c < 65 || c > 90) && (c < 97 || c > 122))
	{
		return (0); //False
	}
	return (1); //True
}