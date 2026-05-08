/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryanan <eryanan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 13:24:48 by eryanan           #+#    #+#             */
/*   Updated: 2026/04/30 15:35:49 by eryanan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))

{
	t_list	*mtn;
	t_list	*next;

	if (lst == NULL || del == NULL)
		return ;
	mtn = *lst;
	while (mtn != NULL)
	{
		next = mtn->next;
		del(mtn->content);
		free(mtn);
		mtn = next;
	}
	*lst = NULL;
}
