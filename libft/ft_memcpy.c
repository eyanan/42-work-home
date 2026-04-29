/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryanan <eryanan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:49:04 by eryanan           #+#    #+#             */
/*   Updated: 2026/04/27 17:16:08 by eryanan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)

{
	const char	*s;
	size_t		i;
	char		*d;

	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
