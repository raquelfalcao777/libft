/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 14:26:13 by rfalcao           #+#    #+#             */
/*   Updated: 2025/11/30 15:45:52 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimstr;
	size_t	start;
	size_t	finish;	

	start = 0;
	finish = ft_strlen(s1);
	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	while (s1[start] && ft_memchr(set, s1[start], ft_strlen(set)))
		start++;
	while (finish > start && ft_memchr(set, s1[finish - 1], ft_strlen(set)))
		finish--;
	trimstr = malloc((finish - start + 1) * sizeof(char));
	if (!trimstr)
		return (0);
	ft_memcpy(trimstr, s1 + start, finish - start);
	trimstr[finish - start] = '\0';
	return (trimstr);
}
