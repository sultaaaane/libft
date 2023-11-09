/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbentahi <mbentahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:24:43 by mbentahi          #+#    #+#             */
/*   Updated: 2023/11/09 21:53:33 by mbentahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t i;
	size_t j;
	
	str = (char *)malloc(sizeof(s) * (len + 1));
	if (!str)
	{
		return (NULL);
	}
	
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
		}
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}