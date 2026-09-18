/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 21:28:01 by marvin            #+#    #+#             */
/*   Updated: 2026/09/18 21:28:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_delim(char ch, char c)
{
	return (ch == c);
}

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (!is_delim(*s, c) && !in_word)
		{
			in_word = 1;
			count++;
		}else if(is_delim(*s, c))
			in_word = 0;
		s++;
	}
	return (count);
}

static char	get_word(char const *s, char c, size_t *i)
{
	size_t	start;
	size_t	len;

	while (s[*i] && is_delim(s[*i], c))
		(*i)++;
	start = *i;
	len = 0;
	while (s[*i] && !is_delim(s[*i], c))
	{
		len++;
		(*i)++;
	}
	return (ft_substr(s, start, len));
}

static void	free_all(char **arr, size_t count)
{
	size_t i;

	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_count;
	size_t	i;
	size_t	idx;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)malloc((word_count + 1) * (sizeof(char *)));
	if (!result)
		return (NULL);
	i = 0;
	idx = 0;
	while (i < word_count)
	{
		result[i] = get_word(s, c, &idx);
		if (!result[i])
		{
			free_all(result, i);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}