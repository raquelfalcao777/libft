/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 16:57:26 by rfalcao           #+#    #+#             */
/*   Updated: 2025/11/17 17:56:13 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}
// int main(void)
// {
// 	printf("!: %d\n",ft_isdigit('!'));
// 	printf("2: %d\n",ft_isdigit('2'));
// 	printf("a: %d\n",ft_isdigit('a'));
// 	printf("empty " ": %d\n",ft_isdigit('\0'));
// 	return (0);
// }