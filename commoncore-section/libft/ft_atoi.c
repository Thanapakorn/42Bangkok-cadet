/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaiyas <tchaiyas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 14:50:06 by tchaiyas          #+#    #+#             */
/*   Updated: 2026/09/07 16:48:13 by tchaiyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	sign;
	int n;
	int	r;

	sign = 1;
	r = 0;
	n = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			n++;
			sign = -sign;
		}
		str++;
	}
	if (n > 2)
		return (0);
	while (*str >= '0' && *str <= '9')
	{
		r = (r * 10) + (*str - '0');
		str++;
	}
	return (r * sign);
}