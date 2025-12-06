/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:31:40 by rfalcao           #+#    #+#             */
/*   Updated: 2025/12/06 16:37:24 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*d;

	if (!s || !f)
		return (0);
	d = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!d)
		return (0);
	i = 0;
	while (s[i])
	{
		d[i] = f(i, s[i]);
		i++;
	}
	d[i] = '\0';
	return (d);
}

// // Test functions
// char to_upper_even(unsigned int i, char c)
// {
//     if (i % 2 == 0 && c >= 'a' && c <= 'z')
//         return (c - 32);
//     return (c);
// }

// char add_one(unsigned int i, char c)
// {
//     (void)i;
//     return (c + 1);
// }

// char replace_x(unsigned int i, char c)
// {
//     (void)i;
//     (void)c;
//     return 'x';
// }

// char identity(unsigned int i, char c)
// {
//     (void)i;
//     return c;
// }

// int main(void)
// {
//     printf("1. Normal: %s\n", ft_strmapi("abcdef", to_upper_even));

//     printf("2. Empty: '%s'\n", ft_strmapi("", identity));

//     printf("3. NULL s: %p\n", ft_strmapi(NULL, identity));

//     printf("4. NULL f: %p\n", ft_strmapi("test", NULL));

//     printf("5. Identity: %s\n", ft_strmapi("hello", identity));

//     printf("6. Increment: %s\n", ft_strmapi("abc", add_one));

//     printf("7. Replace: %s\n", ft_strmapi("hello", replace_x));

//     printf("8. Non-printable: ");
//     char *np = ft_strmapi("\n\t\r", add_one);
//     for (int i = 0; i < 3; i++)
//         printf("%d ", np[i]);
//     printf("\n");

//     return 0;
// }