/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbentahi <mbentahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:58:22 by mbentahi          #+#    #+#             */
/*   Updated: 2023/11/20 16:30:50 by mbentahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;
	
	if (nmemb && (~((size_t)0)) / nmemb < size)
		return (NULL);
	str = malloc(nmemb * size);
	if (!str)
		return (NULL);
	if (nmemb == 0 || size == 0)
	{
		ft_bzero(str,1);
		return (str);
	}
	ft_bzero(str, nmemb * size);
	return (str);
}
