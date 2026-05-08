/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryanan <eryanan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 23:45:46 by eryanan           #+#    #+#             */
/*   Updated: 2026/05/07 05:32:40 by eryanan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)

{
	va_list	args;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += ft_lillard(format[i + 1], args);
			i++;
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

int	ft_lillard(int spe, va_list args)

{
	if (spe == 'c')
		return (ft_puthelp(va_arg(args, int)));
	if (spe == 's')
		return (ft_str_help(va_arg(args, char *)));
	if (spe == 'p')
		return (ft_putptr(va_arg(args, void *)));
	if (spe == 'd' || spe == 'i')
		return (ft_nbr_help(va_arg(args, int)));
	if (spe == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
	if (spe == 'x')
		return (ft_putnbr_hexa(va_arg(args, unsigned int), "0123456789abcdef"));
	if (spe == 'X')
		return (ft_putnbr_hexa(va_arg(args, unsigned int), "0123456789ABCDEF"));
	if (spe == '%')
		return (ft_puthelp('%'));
	return (0);
}

int	ft_putnbr_unsigned(unsigned int nb)

{
	int	count;

	count = 0;
	if (nb > 9)
		count += ft_putnbr_unsigned(nb / 10);
	count += ft_puthelp(nb % 10 + '0');
	return (count);
}

int	ft_putnbr_hexa(unsigned long nb, char *base)

{
	int	count;

	count = 0;
	if (nb >= 16)
		count += ft_putnbr_hexa(nb / 16, base);
	count += ft_puthelp(base[nb % 16]);
	return (count);
}

int	ft_putptr(void *sacri)

{
	unsigned long	clown;
	int				count;

	if (!sacri)
		return (ft_str_help("(nil)"));
	count = 0;
	clown = (unsigned long)sacri;
	count += ft_puthelp('0');
	count += ft_puthelp('x');
	count += ft_putnbr_hexa(clown, "0123456789abcdef");
	return (count);
}
