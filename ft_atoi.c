/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:51:54 by rfalcao           #+#    #+#             */
/*   Updated: 2025/11/16 16:15:07 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	nb;
	int	sign;

	sign = 1;
	nb = 0;
	while (nptr && (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13)))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -sign;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		nb = nb * 10;
		nb += *nptr - '0';
		nptr++;
	}
	return (nb * sign);
}
// int main()
// {
// 	char	*str = "--42abc";
// 	printf("ft_atoi %d\n", ft_atoi(str));
// 	printf("atoi %d\n", atoi(str));
// 	return (0);
// }