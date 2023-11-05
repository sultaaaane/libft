/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbentahi <mbentahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:40:57 by mbentahi          #+#    #+#             */
/*   Updated: 2023/11/05 18:07:29 by mbentahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{	
	size_t i;
	size_t j;
	size_t little_len;
	 
	i = 0;
	j = 0;
	little_len = ft_strlen(little);
	if (!little)
		return (big);
	while (big[i])
	{
		j = 0;
		while (little[j] == big[i + j])
		{
			if (little[j + 1] == '\0')
			{
				return (big + i);
			}
			j++;
		}
		i++;
	}
	
	
}