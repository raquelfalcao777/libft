/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 19:12:04 by rfalcao           #+#    #+#             */
/*   Updated: 2025/11/30 15:20:20 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	if (size <= destlen)
		return (srclen + size);
	while (src[i] != '\0' && (i < size - destlen - 1))
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}

// int main()
// {
// 	char	s1[20] = "1337 42";
// 	char 	s2[] = "Born to code";

// 	printf("ft_strlcat return: %zu\n", ft_strlcat(s1, s2, 20));
// 	printf("%s \n", s1);

// 	return (0);
// }