/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:25:43 by rfalcao           #+#    #+#             */
/*   Updated: 2025/11/17 17:25:39 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

// int main()
// {
// 	char 	dest[100] = "";
// 	char	src[] = "Ahoj!";

// 	printf("Before copying, dest = %s| src = %s\n", dest, src);
// 	ft_strlcpy(dest, src,10);
// 	printf("After copying, dest = %s| src = %s\n", dest, src);
// 	return (0);
// }