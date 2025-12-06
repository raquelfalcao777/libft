/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:08:18 by rfalcao           #+#    #+#             */
/*   Updated: 2025/11/16 16:10:37 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	s = src;
	d = dest;
	i = 0;
	if (src > dest)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (dest);
}

// int	main(void)
// {
//     char str1[] = "Geeks"; // Array of size 100
//     char str2[] = "Quiz"; // Array of size 5
// 	int n = 0;
//     printf("\nstr1 before memmove %s\n", str1);
//     /* Copies contents of str2 to sr1 */
//     memmove(str1, str2, n);
//     printf("\nstr1 after memmove %s\n", str1);	
//     char str3[] = "Geeks"; // Array of size 100
//     printf("\nstr3 before memmove %s\n", str3);
// 	ft_memmove(str3, str2, n);
//     printf("\nstr3 after ft_memmove %s\n", str3);
//     return 0;
// }