/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryanan <eryanan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 20:20:39 by eryanan           #+#    #+#             */
/*   Updated: 2026/04/30 16:04:10 by eryanan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)

{
	t_list	*age;

	age = malloc(sizeof(t_list));
	if (!age)
		return (NULL);
	age->content = content;
	age->next = NULL;
	return (age);
}
