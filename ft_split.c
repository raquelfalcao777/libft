/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 15:19:06 by rfalcao           #+#    #+#             */
/*   Updated: 2025/12/08 17:36:20 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	safe_malloc(char **word_v, int position, size_t buffer)
{
	int	i;

	i = 0;
	word_v[position] = malloc(buffer);
	if (!word_v[position])
	{
		while (i < position)
		{
			free(word_v[i]);
			i++;
		}
		free(word_v);
		return (1);
	}
	return (0);
}

static int	count_words(char const *s, char c)
{
	bool	inside_word;
	int		count_str;

	count_str = 0;
	while (*s)
	{
		inside_word = 0;
		while ((*s == c) && *s)
			s++;
		while (!(*s == c) && *s)
		{
			if (!inside_word)
			{
				count_str++;
				inside_word = 1;
			}
			s++;
		}
	}
	return (count_str);
}

int	fill(char **words_v, char const *s, char c)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			len++;
			s++;
		}
		if (len)
		{
			if (safe_malloc(words_v, i, len + 1))
				return (1);
			ft_strlcpy(words_v[i], s - len, len + 1);
			i++;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		count_str;
	char	**words_v;

	if (!s)
		return (0);
	count_str = count_words(s, c);
	words_v = malloc(sizeof(char *) * (count_str + 1));
	if (!words_v)
		return (0);
	words_v[count_str] = NULL;
	if (fill(words_v, s, c))
		return (0);
	return (words_v);
}
