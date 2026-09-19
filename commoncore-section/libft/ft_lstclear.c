/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 07:15:26 by marvin            #+#    #+#             */
/*   Updated: 2026/09/19 07:15:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cuurent;
	t_list	*next;

	if (!lst || !del)
		return ;
	cuurent = *lst;
	while (cuurent)
	{
		next = cuurent->next;
		ft_lstdelone(cuurent, del);
		cuurent = next;
	}
	*lst = NULL;
}