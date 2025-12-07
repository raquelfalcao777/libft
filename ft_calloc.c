/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:00:55 by rfalcao           #+#    #+#             */
/*   Updated: 2025/11/17 18:10:28 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*d;

	if (nmemb && size && (SIZE_MAX / nmemb) < size)
		return (0);
	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	d = malloc(nmemb * size);
	if (d == NULL)
		return (0);
	ft_bzero(d, nmemb * size);
	return (d);
}

// int main(void)
// {
//     char *p;

//     p = ft_calloc(0, 10);
//     printf("pointer: %p\n", p);
//     free(p);

//     p = ft_calloc(5, 0);
//     printf("pointer: %p\n", p);
//     free(p);

//     int *a = ft_calloc(3, sizeof(int));
//     for (int i = 0; i < 3; i++)
//         printf("%d ", a[i]);  // should print: 0 0 0
//     free(a);

//     return 0;
// }