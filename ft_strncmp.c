/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 14:51:21 by rfalcao           #+#    #+#             */
/*   Updated: 2025/11/17 17:23:49 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n < 1)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

// int main()
// {
// 	char	s1[] = "abc";
// 	char 	s2[] = "ab";
// 	int n = 10;
//     printf("strncmp returns: %d\n", strncmp(s1, s2,n));
// 	printf("ft_strcmp return: %d\n", ft_strncmp(s1, s2, n));
//     return (0);
// }
