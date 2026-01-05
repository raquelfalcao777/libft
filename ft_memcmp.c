/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 12:18:05 by rfalcao           #+#    #+#             */
/*   Updated: 2025/12/08 17:33:02 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*s_1;
	const unsigned char		*s_2;
	size_t					i;

	s_1 = (const unsigned char *)s1;
	s_2 = (const unsigned char *)s2;
	i = 0;
	if (n < 1)
		return (0);
	while (i < n && s_1[i] == s_2[i])
		i++;
	if (i == n)
		return (0);
	return (s_1[i] - s_2[i]);
}
