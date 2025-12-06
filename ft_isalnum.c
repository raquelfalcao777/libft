/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:57:00 by rfalcao           #+#    #+#             */
/*   Updated: 2025/11/17 17:57:03 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c)) || ft_isdigit(c))
		return (1);
	return (0);
}
// int main(void)
// {
// 	printf("!: %d\n",ft_isalnum('!'));
// 	printf("2: %d\n",ft_isalnum('2'));
// 	printf("a: %d\n",ft_isalnum('a'));
// 	printf("empty " ": %d\n",ft_isalnum('\0'));
// 	return (0);
// }