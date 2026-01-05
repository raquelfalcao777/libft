/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:30:34 by rfalcao           #+#    #+#             */
/*   Updated: 2026/01/03 17:19:53 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_nb_size(unsigned int nb)
{
	unsigned int	size;

	size = 0;
	while (nb >= 10)
	{
		nb /= 10;
		++size;
	}
	return (size + 1);
}

static unsigned int	handle_sign(int nbr, unsigned int *size, char *str)
{
	unsigned int	nb;

	if (nbr < 0)
	{
		str[0] = '-';
		(*size)++;
		nb = (unsigned int)(-nbr);
	}
	else
		nb = (unsigned int)nbr;
	return (nb);
}

static unsigned int	abs_size(int nbr)
{
	if (nbr < 0)
		return (get_nb_size((unsigned int)(-nbr)));
	return (get_nb_size((unsigned int)nbr));
}

char	*ft_itoa(int nbr)
{
	char			*str;
	unsigned int	nb;
	unsigned int	index;
	unsigned int	size;

	size = abs_size(nbr);
	str = malloc(sizeof(char) * (size + 1 + (nbr < 0)));
	if (!(str))
		return (0);
	nb = handle_sign(nbr, &size, str);
	index = size - 1;
	while (nb >= 10)
	{
		str[index--] = (char)(nb % 10 + 48);
		nb /= 10;
	}
	str[index] = nb + '0';
	str[size] = '\0';
	return (str);
}
