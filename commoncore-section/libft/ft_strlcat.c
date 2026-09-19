/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaiyas <tchaiyas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 06:35:33 by tchaiyas          #+#    #+#             */
/*   Updated: 2026/09/19 15:58:40 by tchaiyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t s)
{
	size_t	deslen;
	size_t	srclen;
	size_t	i;

	deslen = 0;
	srclen = 0;
	i = 0;
	while (dest[deslen] != '\0' && deslen < s)
		deslen++;
	while (src[srclen] != '\0')
		srclen++;
	if (deslen == s)
		return (srclen + s);
	while (src[i] != '\0' && deslen + i < s - 1)
	{
		dest[deslen + i] = src[i];
		i++;
	}
	dest[deslen + i] = '\0';
	return (deslen + srclen);
}
