/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaiyas <tchaiyas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 15:02:26 by tchaiyas          #+#    #+#             */
/*   Updated: 2026/09/07 17:39:21 by tchaiyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_tft_strlen(const char *str)
{
	size_t	cout;

	cout = 0;
	while (str[cout] != '\0')
	{
		cout++;
	}
	return (cout);
}