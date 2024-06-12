/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:25:23 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/06/07 17:25:25 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"
/*
	int	ft_isprint(int c);
	Purpose: Identify any printable character.
*/
int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
	{
		return (0); //False
	}
	return (1); //True
}
