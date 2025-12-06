/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 19:33:05 by rfalcao           #+#    #+#             */
/*   Updated: 2025/11/16 16:11:38 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 'a' && c <= 'z'))
		c -= 32;
	return (c);
}

// int main(void)
// {
// 	printf("!: %d\n",ft_toupper('!'));
// 	printf("2: %d\n",ft_toupper('2'));
// 	printf("a: %d\n",ft_toupper('a'));
// 	printf("empty " ": %d\n",ft_toupper('\0'));
// 	return (0);
// }
