/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:33:44 by melsahha          #+#    #+#             */
/*   Updated: 2022/11/16 19:12:24 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;

	ret = malloc(count * size);
	if (!ret || size == 0 || count == 0)
		return (0);
	ft_bzero(ret, size);
	return (ret);
}

/* int	main(void)
{
	char *c;
	c = (char *)ft_calloc(3, 1);
	printf("%s\n", c);
	return 0;
}
 */
