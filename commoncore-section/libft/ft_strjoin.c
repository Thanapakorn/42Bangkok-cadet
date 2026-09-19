/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaiyas <tchaiyas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 02:36:32 by tchaiyas          #+#    #+#             */
/*   Updated: 2026/09/19 17:12:32 by tchaiyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	char	*p;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	join = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	p = join;
	if (!join)
		return (NULL);
	while (len1--)
		*join++ = *s1++;
	while (len2--)
		*join++ = *s2++;
	*join = '\0';
	return (p);
}
