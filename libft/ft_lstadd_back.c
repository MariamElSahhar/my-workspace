/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:56:56 by melsahha          #+#    #+#             */
/*   Updated: 2022/11/13 22:14:05 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	while (ptr->next != 0)
	{
		ptr = ptr->next;
	}
	return (ptr);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;
	
	new->next = 0;
	last = ft_lstlast(lst);
	last->next = new;
}
