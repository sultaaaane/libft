/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbentahi <mbentahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 02:04:53 by mbentahi          #+#    #+#             */
/*   Updated: 2023/11/05 15:36:11 by mbentahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
	 	i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
#include<stdio.h>
#include<bsd/string.h>
int main()
{
	char str[] = "World!";
	char dest[15] = "Hello";
	printf("%lu\n", ft_strlcat(dest,str,sizeof(dest)));
	printf("%s\n",dest);
	 printf("%li\n", strlcat(dest,str,sizeof(dest)));
	 printf("%s\n",dest);
}