/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:50:02 by rfalcao           #+#    #+#             */
/*   Updated: 2025/11/17 18:25:13 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*d;
	size_t		size;

	size = ft_strlen((char *)s);
	d = malloc((size + 1) * sizeof(char));
	if (d == NULL)
		return (0);
	else
		ft_memcpy(d, s, size);
	d[size] = '\0';
	return (d);
}

// int main ()
// {
// 	char array1[] = "programming";
// 	printf("The string in array 1 is %s\n", array1);
// 	char *array2 = ft_strdup(array1);
// 	printf("The string was copied: %s\n", array2);
// 	free(array2);
// 	return(0);
// }