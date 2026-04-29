/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryanan <eryanan@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 01:24:51 by eryanan           #+#    #+#             */
/*   Updated: 2026/04/29 01:38:41 by eryanan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)

{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write (fd, '-', 1);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10, fd);
	ft_putchar_fd(nb % 10 + '0', fd);
}
