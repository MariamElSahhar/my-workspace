/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 22:24:51 by melsahha          #+#    #+#             */
/*   Updated: 2022/11/14 20:08:48 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*ptr;

	res = malloc(sizeof(t_list *));
	*res->next = *lst->next;
	res->content = f(lst->content);
	ptr = lst->next;
	while (ptr)
	{
		res = res->next;
		res = malloc(sizeof(t_list *));
		res->next = lst->next;
		res->content = f(lst->content);
		ptr = ptr->next;
	}
	return (res);
}
