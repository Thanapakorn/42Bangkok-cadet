/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 16:22:19 by marvin            #+#    #+#             */
/*   Updated: 2026/09/11 16:22:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    while (*s != '\0')
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }
    if (c == '\0')
        return ((char *)s);
    return (NULL);
}
/*
#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Hello 42 Bangkok";
	char	*result_mine;
	char	*result_real;

	result_mine = ft_strchr(str, 'B');
	result_real = strchr(str, 'B');
	printf("ft_strchr : %s\n", result_mine);
	printf("strchr    : %s\n", result_real);
	if (result_mine == NULL || result_real == NULL)
		printf("ผลลัพธ์: %s\n",
			(result_mine == result_real) ? "ตรงกัน (ทั้งคู่ NULL)" : "ไม่ตรงกัน!");
	else
		printf("ผลลัพธ์: %s\n",
			(strcmp(result_mine, result_real) == 0) ? "ตรงกัน" : "ไม่ตรงกัน!");
	return (0);
} */