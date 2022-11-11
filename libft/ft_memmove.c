/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:58:42 by melsahha          #+#    #+#             */
/*   Updated: 2022/11/11 18:43:40 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	char	buff[len];
	int		i;

	s = (char *) src;
	d = (char *) dst;
	i = 0;
	while (i < len)
	{
		buff[i] = s[i];
		i ++;
	}
	i = 0;
	while (i < len)
	{
		d[i] = buff[i];
		i ++;
	}
	return (dst);
}

#include <stdio.h>
int main(void)
{
	int size = 15;
	char dest[size];
	char src[] = "source";
	printf("%s\n", ft_memmove(dest, src, size));
	return 0;
}

