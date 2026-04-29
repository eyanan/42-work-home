/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryanan <eryanan@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 03:18:47 by eryanan           #+#    #+#             */
/*   Updated: 2026/04/29 03:27:29 by eryanan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int	count(long n)

{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	if (n == 0)
		len++;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)

{
	int	len;
	char	*str;
	long	nb;

	len = count(n);
	nb = (long) n;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[len - 1] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (str);
}


static size_t	ft_count_digits(long num)
{
	size_t	len;

	if (num <= 0)
		len = 1;
	else
		len = 0;
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static void	ft_fill_number(char *str, long num, size_t len)
{
	int	digit;

	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
		str[0] = '-';
	while (num)
	{
		if (num < 0)
			digit = num % 10 * -1;
		else
			digit = num % 10;
		str[--len] = '0' + (char)digit;
		num /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	size_t	len;

	num = (long)n;
	len = ft_count_digits(num);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_fill_number(str, num, len);
	return (str);
}

