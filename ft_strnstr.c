/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:02:07 by rfalcao           #+#    #+#             */
/*   Updated: 2025/11/16 16:11:23 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0' )
	{
		j = 0;
		while (s1[i + j] == s2[j] && i < n)
		{
			if (s2[j + 1] == '\0')
				return ((char *)s1 + i);
			j++;
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	char	s1[] = "-62,47 +62,47";
// 	char 	s2[] = "+62";

// 	printf("Lookfor needle %s in haystack %s\n", s2, s1);

// 	printf("ft_strnstr return: %s\n", ft_strnstr(s1, s2, 10));

// 	return (0);
// }