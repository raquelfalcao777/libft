/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 11:31:03 by rfalcao           #+#    #+#             */
/*   Updated: 2025/11/30 15:53:17 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)(p + i));
		i++;
	}
	return (0);
}

// int main()
// {
// 	int  ch1= 'A', ch2 = 'a';
// 	char text[] = "C programming language.";
// 	char *pdest;
// 	char *pdest_ft;
// 	int result;
// 	int result_ft;
// 	printf("Original String: %s", text );
// 	printf("\n\nCheck the character %c present in the said text!",ch1);
// 	pdest = (char *)memchr(text, ch1, strlen(text));
// 	pdest_ft = (char *)ft_memchr(text, ch1, strlen(text));
// 	result = (int)(pdest - text + 1);
// 	result_ft = (int)(pdest_ft - text +1);
// 	if ( pdest != NULL && pdest_ft != NULL)
// 	{
// 		printf( "memchr  found '%c' at position %d\n", ch1, result);
// 		printf( "ft_memchr  found '%c' at position %d\n", ch1, result_ft);		
// 	}

// 	else
// 		printf("\n%c not found!",ch1);

// 	printf("\n\nCheck the character '%c' present in the said text!\n",ch2);
// 	pdest = (char *)memchr(text, ch2, strlen(text));
// 	pdest_ft = (char *)ft_memchr(text, ch2, strlen(text));
// 	result = (int)(pdest - text + 1);
// 	result_ft = (int)(pdest_ft - text +1);
// 	if (pdest_ft != NULL )
// 	{
// 		printf( "memchr  found '%c' at position %d\n", ch2, result);	
// 		printf( "ft_memchr  found '%c' at position %d\n", ch2, result_ft);
// 	}

// 	else
// 		printf("\n%c not found!",ch2);
// 	return 0;
// }