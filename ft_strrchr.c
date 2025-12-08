/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 12:27:53 by rfalcao           #+#    #+#             */
/*   Updated: 2025/12/08 17:34:04 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*start = str;

	while (*str)
		str++;
	while (str >= start)
	{
		if (*str == (char)c)
			return ((char *)str);
		str--;
	}
	return (0);
}
