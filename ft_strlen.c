/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:28:58 by rfalcao           #+#    #+#             */
/*   Updated: 2025/11/17 18:09:26 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	str[] = "Ahoj!!";
// 	size_t len = ft_strlen(str);

// 	printf("Length of string is %zu\n", len);
// 	return (0);
// }
