/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_help.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryanan <eryanan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 04:08:03 by eryanan           #+#    #+#             */
/*   Updated: 2026/05/07 05:21:08 by eryanan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_str_help(char *s)

{
	if (!s)
		return (ft_str_help("(null)"));
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}

int	ft_nbr_help(int n)

{
	int		count;
	long	nb;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		count += ft_puthelp('-');
		nb = -nb;
	}
	if (nb > 9)
		count += ft_nbr_help((int)(nb / 10));
	count += ft_puthelp((int)(nb % 10) + '0');
	return (count);
}

int	ft_puthelp(char c)

{
	ft_putchar_fd(c, 1);
	return (1);
}
