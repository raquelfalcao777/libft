/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:00:55 by rfalcao           #+#    #+#             */
/*   Updated: 2025/12/08 17:32:15 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*d;

	if (nmemb && size && (SIZE_MAX / nmemb) < size)
		return (0);
	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	d = malloc(nmemb * size);
	if (d == NULL)
		return (0);
	ft_bzero(d, nmemb * size);
	return (d);
}
