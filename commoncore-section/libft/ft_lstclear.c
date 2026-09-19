/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaiyas <tchaiyas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 07:15:26 by tchaiyas          #+#    #+#             */
/*   Updated: 2026/09/19 16:32:32 by tchaiyas         ###   ########.fr       */
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
		*lst = NULL;
	}
}
