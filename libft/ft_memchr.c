/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:29:42 by melsahha          #+#    #+#             */
/*   Updated: 2022/11/11 17:37:22 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p;
	int		i;

	p = (char *) s;
	i = 0;
	while (i < n)
	{
		if (*p == (char) c)
			return (p);
		p ++;
		i ++;
	}
	return (0);
}

/* #include <stdio.h>
int main(void)
{
	printf("%s\n", ft_memchr("this is string", 'i', 14));
	return 0;
}
 */
