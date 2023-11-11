/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbentahi <mbentahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 20:18:44 by mbentahi          #+#    #+#             */
/*   Updated: 2023/11/11 20:30:22 by mbentahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	long nb;
	
	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		write(fd,"-",1);
	}
	if ((nb / 10) > 0)
		ft_putnbr_fd((nb/10), fd);
	ft_putchar_fd(nb % 10 + 48, fd);
	
}