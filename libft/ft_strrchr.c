/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:56:15 by melsahha          #+#    #+#             */
/*   Updated: 2022/11/14 18:46:26 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
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
