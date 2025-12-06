/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 19:41:41 by rfalcao           #+#    #+#             */
/*   Updated: 2025/11/16 16:11:31 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		c += 32;
	return (c);
}

// int main(void)
// {
// 	printf("!: %d\n",ft_tolower('!'));
// 	printf("2: %d\n",ft_tolower('2'));
// 	printf("a: %d\n",ft_tolower('a'));
// 	printf("A: %d\n",ft_tolower('A'));
// 	printf("empty " ": %d\n",ft_tolower('\0'));
// 	return (0);
// }
