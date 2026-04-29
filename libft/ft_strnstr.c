/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryanan <eryanan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 06:42:47 by eryanan           #+#    #+#             */
/*   Updated: 2026/04/27 14:52:40 by eryanan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)

{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (lit[0] == 0)
		return ((char *) big);
	while (big[i] && i < len)
	{
		while (big[i + j] == lit[j] && big[i + j] && i + j < len)
		{
			j++;
			if (lit[j] == 0)
				return ((char *) big + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
