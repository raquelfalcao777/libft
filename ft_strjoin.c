/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 13:24:53 by rfalcao           #+#    #+#             */
/*   Updated: 2025/11/30 15:46:04 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concatstr;
	size_t	size_concat;
	size_t	sizes1;
	size_t	sizes2;

	if (!s1 || !s2)
		return (0);
	sizes1 = ft_strlen(s1);
	sizes2 = ft_strlen(s2);
	size_concat = sizes1 + sizes2;
	concatstr = malloc((size_concat + 1) * sizeof(char));
	if (!concatstr)
		return (0);
	ft_memcpy(concatstr, s1, sizes1);
	ft_memcpy(concatstr + sizes1, s2, sizes2);
	concatstr[size_concat] = '\0';
	return (concatstr);
}
