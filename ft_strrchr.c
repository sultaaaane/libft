/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbentahi <mbentahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:13:44 by mbentahi          #+#    #+#             */
/*   Updated: 2023/11/23 14:27:17 by mbentahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last_occurrence;

	last_occurrence = NULL;
	while (*str)
	{
		if (*str == (char)c)
		{
			last_occurrence = (char *)str;
		}
		str++;
	}
	if (*str == (char)c)
	{
		return ((char *)str);
	}
	return (last_occurrence);
}
