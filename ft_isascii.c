/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:57:20 by rfalcao           #+#    #+#             */
/*   Updated: 2025/11/17 17:57:11 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127) || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
// int main(void)
// {
// 	printf("!: %d\n",ft_isascii('!'));
// 	printf("2: %d\n",ft_isascii('2'));
// 	printf("a: %d\n",ft_isascii('a'));
// 	printf("empty " ": %d\n",ft_isascii('\n'));
// 	return (0);
// }