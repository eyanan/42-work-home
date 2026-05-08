/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryanan <eryanan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 04:28:02 by eryanan           #+#    #+#             */
/*   Updated: 2026/05/07 05:13:21 by eryanan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_printf(const char *format, ...);

int	ft_lillard(int spe, va_list args);

int	ft_putnbr_unsigned(unsigned int nb);

int	ft_putnbr_hexa(unsigned long nb, char *base);

int	ft_putptr(void *sacri);

int	ft_str_help(char *s);

int	ft_nbr_help(int n);

int	ft_puthelp(char c);

#endif