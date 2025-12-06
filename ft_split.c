/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 15:19:06 by rfalcao           #+#    #+#             */
/*   Updated: 2025/11/30 15:25:20 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		count_str;
	int		len;
	int		i;
	int		old_i;
	int	str_index;
	int j;
	int	to_allocate;

	i = 0;
	count_str = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		while (i < len)
		{
			if (!ft_strchr(s, c))
				break;
			i++;
		}
		old_i = i;
		while (i < len)
		{
			if (ft_strchr(s, c))
				break;
			i++;
		}
		if (i > old_i) count_str += count_str;
	}
	
	char **strings = malloc(sizeof(char *) * count_str);

	i = 0;
	char buffer[16384];
	str_index = 0;
	while (i < len)
	{
		while (i < len)
		{
			if (!ft_strchr(s, c))
				break;
			i++;
		}
		j = 0;
		while (i < len)
		{
			if (ft_strchr(s, c))
				break;
			buffer[i] = s[i];
			i++;
			j++;
		}

		if (j > 0)
		{
			buffer[j] = '\0';

			to_allocate = sizeof(char) * (ft_strlen(buffer) + 1);
			strings[str_index] = malloc(to_allocate);

			ft_strlcpy(strings[str_index], buffer, ft_strlen(buffer));

			str_index++;		
		}
		return strings;

	}

}