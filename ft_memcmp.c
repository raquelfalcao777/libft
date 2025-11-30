/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 12:18:05 by rfalcao           #+#    #+#             */
/*   Updated: 2025/11/16 16:10:29 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*s_1;
	const unsigned char		*s_2;
	size_t					i;

	s_1 = s1;
	s_2 = s2;
	i = 0;
	if (n < 1)
		return (0);
	while (s_1[i] == s_2[i] && i < n)
		i++;
	return (s_1[i] - s_2[i]);
}

// void test(const char *name, const void *a, const void *b, size_t n)
// {
//     int real = memcmp(a, b, n);
//     int mine = ft_memcmp(a, b, n);

//     printf("%-25s | memcmp = %4d | ft_memcmp = %4d | %s\n",
//            name,
//            real,
//            mine,
//            (real == mine) ? "OK" : "FAIL");
// }

// int main(void)
// {
//     char s1[] = "abc";
//     char s2[] = "abc";
//     char s3[] = "abd";
//     char s4[] = "ab";
//     char s5[] = "";
//     char s6[] = "";
//     unsigned char bin1[] = {0x00, 0x01, 0xFF, 0x7F};
//     unsigned char bin2[] = {0x00, 0x01, 0xFE, 0x7F};

//     printf("\n--- BASIC CASES ---\n");
//     test("Equal strings", s1, s2, 3);
//     test("Different at end", s1, s3, 3);
//     test("Different early",  s1, s3, 1);
//     test("One shorter",     s1, s4, 3);

//     printf("\n--- EMPTY / ZERO LENGTH ---\n");
//     test("Zero length",     s1, s4, 0);
//     test("Both empty",      s5, s6, 5);

//     printf("\n--- BINARY DATA ---\n");
//     test("Binary diff byte", bin1, bin2, 4);

//     printf("\n--- SAME POINTER ---\n");
//     test("Same pointer",    s1, s1, 10);

//     return 0;
// }
