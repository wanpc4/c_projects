/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:29:04 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/07 17:29:06 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"
/*
	int		ft_tolower(int c);
	Purpose: To convert uppercase character to lowercase.
*/
int	ft_tolower(int c)
{
	//Convert uppercase to lowercase
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	return (c); //It will remain the character as it is.
}
