/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:28:08 by melsahha          #+#    #+#             */
/*   Updated: 2022/11/16 19:24:24 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *) dst;
	s = (char *) src;
	while (n > 0)
	{
		*d = *s;
		n--;
		s++;
		d++;
	}
	return (dst);
}

/* #include <stdio.h>
int main(void)
{
	int size = 15;
	char dest[size];
	char src[] = "source";
	printf("%s\n", ft_memcpy(dest, src, size));
	return 0;
}
 */
