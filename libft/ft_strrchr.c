/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:56:15 by melsahha          #+#    #+#             */
/*   Updated: 2022/11/11 17:07:09 by melsahha         ###   ########.fr       */
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

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		size;
	char	*p;

	size = ft_strlen(s);
	p = (char *) s + size;
	while (size >= 0)
	{
		if (*p == (char) c)
			return (p);
		size --;
		p --;
	}
	return (0);
}
