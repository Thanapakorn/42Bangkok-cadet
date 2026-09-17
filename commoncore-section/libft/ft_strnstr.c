/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 02:29:13 by marvin            #+#    #+#             */
/*   Updated: 2026/09/16 02:29:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t  i;
	size_t  j;

	if (lit[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (lit[j] != '\0' 
			&& big[i + j] == lit[j]
			&& i + j < len)
			j++;
		if (lit[j] == '\0')
			return ((char *)(big + 1));
		i++;
	}
	return (NULL);
}