/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 12:27:53 by rfalcao           #+#    #+#             */
/*   Updated: 2025/11/16 16:11:27 by rfalcao          ###   ########.fr       */
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

// int main(void)
// {
// 	char	s[] = "some,data,in,commas";
// 	int	c = ',';

// 	printf("Look for %c in str %s\n", c, s);
// 	printf("strchr returns: %s\n", strrchr(s, ','));
// 	printf("Look for %c in str %s\n", c, s);
// 	printf("ft_strchr return: -%s-\n", ft_strrchr(s, ','));

// 	return (0);
// }