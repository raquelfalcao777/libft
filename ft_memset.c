/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:56:44 by rfalcao           #+#    #+#             */
/*   Updated: 2025/11/16 16:10:41 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char	buffer[10];

// 	ft_memset(buffer, 'A', 10);
// 	for (int i = 0; i < 10; i++)
// 		printf("%c ", buffer[i]);
// 	printf("\n");

// 	return (0);
// }