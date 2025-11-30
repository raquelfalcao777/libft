/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 19:43:47 by rfalcao           #+#    #+#             */
/*   Updated: 2025/11/16 16:10:45 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	return (0);
}

// int main(void)
// {
// 	char	tweet[] = "This is my @mention!";
// 	int	c = '@';

// 	printf("Look for %c in str %s\n", c, tweet);
// 	printf("strchr returns: %s\n", strchr(tweet, '@'));
// 	printf("Look for %c in str %s\n", c, tweet);
// 	printf("ft_strchr return: -%s-\n", ft_strchr(tweet, '@'));

// 	return (0);
// }