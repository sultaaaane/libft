/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rand.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbentahi <mbentahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:37:49 by mbentahi          #+#    #+#             */
/*   Updated: 2024/09/07 12:53:57 by mbentahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_rand(int reset, int seed)
{
	static unsigned int	s = 0;

	if (reset)
		s = seed;
	s = (s * 54554 + 12348485) & 0x7fffffff;
	return (s);
}
