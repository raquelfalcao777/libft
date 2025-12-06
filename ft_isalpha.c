/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 16:57:26 by rfalcao           #+#    #+#             */
/*   Updated: 2025/11/17 17:55:48 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
// int main(void)
// {
// 	printf("!: %d\n",ft_isalpha('!'));
// 	printf("2: %d\n",ft_isalpha('2'));
// 	printf("a: %d\n",ft_isalpha('a'));
// 	printf("empty " ": %d\n",ft_isalpha('\0'));
// 	return (0);
// }