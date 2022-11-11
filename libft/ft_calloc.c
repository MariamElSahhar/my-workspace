/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:33:44 by melsahha          #+#    #+#             */
/*   Updated: 2022/11/11 18:52:57 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p = 0;
		p ++;
		n --;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;
	int		i;

	ret = malloc(count * size);
	ft_bzero(ret, size);
	return (ret);
}

/* int	main(void)
{
	ft_calloc(3, 4);
	return 0;
}
 */
