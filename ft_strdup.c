/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:50:02 by rfalcao           #+#    #+#             */
/*   Updated: 2025/12/08 17:33:36 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*d;
	size_t		size;

	size = ft_strlen((char *)s);
	d = malloc((size + 1) * sizeof(char));
	if (d == NULL)
		return (0);
	else
		ft_memcpy(d, s, size);
	d[size] = '\0';
	return (d);
}
