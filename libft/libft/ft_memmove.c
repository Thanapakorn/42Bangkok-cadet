/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaiyas <tchaiyas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 19:00:12 by tchaiyas          #+#    #+#             */
/*   Updated: 2026/09/07 19:10:56 by tchaiyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libdt.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;
	size_t	i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (d == s)
		return (dest);
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dest);
}