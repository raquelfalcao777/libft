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

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*d;

	d = malloc(nelem * elsize);
	if (d == NULL)
		return (0);
	if (nelem == 0 || elsize == 0)
	{
		nelem = 1;
		elsize = 1;
	}
	ft_bzero(d, nelem * elsize);
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