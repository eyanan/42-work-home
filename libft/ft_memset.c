/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryanan <eryanan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:40:18 by eryanan           #+#    #+#             */
/*   Updated: 2026/04/27 14:53:25 by eryanan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)

{
	unsigned char	*m;
	size_t			i;

	i = 0;
	m = (unsigned char *)s;
	while (i < n)
	{
		*m = (unsigned char)c;
		i++;
		m++;
	}
	return (s);
}
/*
int main(void)

{
	char str[] = "test 123456789";
	ft_memset(str, 'm', 4);
	printf("%s\n", str);
}*/
