/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:30:34 by rfalcao           #+#    #+#             */
/*   Updated: 2025/12/06 18:57:32 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*itoa_zero_min(int n)
{
	char	*str;

	str = NULL;
	if (n == 0)
	{
		str = malloc(2);
		if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
	}
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (str);
}

char	*ft_itoa(int n)
{
	int		is_negative;
	char	*string;
	long	nb;
	int		len;

	string = NULL;
	if (n == -2147483648 || n == 0)
		return (itoa_zero_min(n));
	nb = n;
	is_negative = nb < 0;
	if (is_negative)
		nb = -nb;
	len = count_digits(nb);
	string = malloc((len + is_negative + 1) * sizeof(char));
	if (!string)
		return (NULL);
	string[len + is_negative] = '\0';
	while (len-- > 0)
	{
		string[len + is_negative] = (n % 10) + '0';
		n /= 10;
	}
	if (is_negative)
		string[0] = '-';
	return (string);
}
