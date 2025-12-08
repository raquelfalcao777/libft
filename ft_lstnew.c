/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:52:40 by rfalcao           #+#    #+#             */
/*   Updated: 2025/12/08 19:08:35 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstnew(void *content)
{
	t_list	*p;
	
	p = malloc(sizeof(t_list));
	p->content = content;
	p->next = 0;
	return (p);
}
