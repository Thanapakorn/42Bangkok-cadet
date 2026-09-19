/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstiter.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tchaiyas <tchaiyas@student.42bangkok.com> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/19 07:24:49 by tchaiyas         #+#    #+#              */
/*   Updated: 2026/09/19 15:56:26 by tchaiyas        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (*f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
