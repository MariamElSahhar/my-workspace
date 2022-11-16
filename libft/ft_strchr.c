/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:48:49 by melsahha          #+#    #+#             */
/*   Updated: 2022/11/14 18:41:45 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		size;
	char	*p;

	size = ft_strlen(s);
	p = (char *) s;
	i = 0;
	while (i <= size)
	{
		if (*p == (char) c)
			return (p);
		p ++;
		i ++;
	}
	return (0);
}
