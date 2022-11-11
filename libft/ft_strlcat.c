/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:21:56 by melsahha          #+#    #+#             */
/*   Updated: 2022/11/11 16:55:00 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int	start;
	int	i;
	int	ret;

	start = ft_strlen(dst);
	ret = start + ft_strlen(src);
	i = 0;
	while ((start + i) < (dstsize - 1))
	{
		dst[start + i] = src[i];
		i ++;
	}
	if (dstsize != 0 && dstsize > ft_strlen(dst))
		dst[start + i] = '\0';
	return (ret);
}
