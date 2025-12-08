/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfalcao <rfalcao@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 19:41:36 by rfalcao           #+#    #+#             */
/*   Updated: 2025/12/08 19:42:28 by rfalcao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	
}

t_list	*ft_lstnew(void *content)
{
	t_list	*p;
	
	p = malloc(sizeof(t_list));
	p->content = content;
	p->next = 0;
	return (p);
}