/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbentahi <mbentahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:24:43 by mbentahi          #+#    #+#             */
/*   Updated: 2024/08/08 14:15:58 by mbentahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

char	*ft_newstr(size_t size)
{
	char	*res;

	res = malloc(size + 1);
	if (!res)
		return (NULL);
	ft_bzero(res, size + 1);
	return (res);
}

char	*ft_substr1(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	j;
	t_all	*glob_v;

	glob_v = static_global();
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_newstr(0));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	ft_lstadd_back_free(&glob_v->free, init_free(str));
	if (!str)
		return (NULL);
	j = 0;
	while (s[start + j] && j < len)
	{
		str[j] = s[start + j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
