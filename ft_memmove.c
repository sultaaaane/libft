/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbentahi <mbentahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:03:06 by mbentahi          #+#    #+#             */
/*   Updated: 2023/11/07 02:17:15 by mbentahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	int				i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = n;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src)
		memcpy(dest, src, n);
	else
	{
		while (i-- && *s)
		{
			if (s == d + n)
				break ;
			*(d + i) = *(s + i);
		}
	}
	return (dest);
}
