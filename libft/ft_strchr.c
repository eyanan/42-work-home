/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryanan <eryanan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 06:52:20 by eryanan           #+#    #+#             */
/*   Updated: 2026/04/27 14:53:18 by eryanan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)

{
	unsigned int	i;
	char			loc;

	loc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == loc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == loc)
		return ((char *) &s1[i]);
	return (NULL);
}
