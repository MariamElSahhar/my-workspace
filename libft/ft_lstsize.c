/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:52:54 by melsahha          #+#    #+#             */
/*   Updated: 2022/11/16 21:32:46 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*ptr;

	ptr = (t_list *)lst;
	count = 0;
	while (ptr != 0)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}

/* #include <string.h>
int main()
{
	t_list *l;

	l = ft_lstnew(strdup("1"));
	l->next = ft_lstnew(strdup("2"));
	l->next->next = ft_lstnew(strdup("3"));
	printf("%i\n",ft_lstsize(l));
	return 0;
}
 */
