/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:14:50 by rfalcao           #+#    #+#             */
/*   Updated: 2025/11/30 15:45:57 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		substring = malloc(1);
		if (!substring)
			return (0);
		substring[0] = '\0';
		return (substring);
	}
	if (len > s_len - start)
		len = s_len - start;
	substring = malloc((len + 1) * sizeof(char));
	ft_memcpy(substring, s + start, len);
	substring[len] = '\0';
	return (substring);
}
