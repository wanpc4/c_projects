/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:29:14 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/07 17:29:17 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"
/*
	int		ft_toupper(int c);
	Purpose: To convert lowercase character to uppercase.
*/
int	ft_toupper(int c)
{
	//Convert lowercase to uppercase
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c); //It will remain the character as it is.
}
