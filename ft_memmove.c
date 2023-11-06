/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbentahi <mbentahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:03:06 by mbentahi          #+#    #+#             */
/*   Updated: 2023/11/06 21:47:15 by mbentahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	int i = n;
	if (dest== NULL && src == NULL)
		return (NULL);
	if (dest < src)
		memcpy(dest , src, n);
	else
	{
		while (i-- && *s)
		{
			if (src == dest + n)
				break;
			*(d+i) = *(s+i);
		}
	}
	return (dest);
}
