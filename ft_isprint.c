/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:57:33 by rfalcao           #+#    #+#             */
/*   Updated: 2025/11/17 17:56:19 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	return (0);
}
// int main(void)
// {
// 	printf("!: %d\n",ft_isprint('!'));
// 	printf("2: %d\n",ft_isprint('2'));
// 	printf("a: %d\n",ft_isprint('a'));
// 	printf("space " ": %d\n",ft_isprint(' '));
// 	printf("DEL: %d\n", ft_isprint('\x7F'));
// 	return (0);
// }