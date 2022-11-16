/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 22:06:17 by melsahha          #+#    #+#             */
/*   Updated: 2022/11/14 18:33:28 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*prev;

	ptr = *lst;
	while (ptr->next != 0)
	{
		del(ptr->content);
		prev = ptr;
		ptr = ptr->next;
		free(prev);
	}
}
