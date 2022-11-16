/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:55:55 by melsahha          #+#    #+#             */
/*   Updated: 2022/11/16 20:10:07 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	char	*p;
	size_t	i;

	p = (char *) s;
	ret = (char *) malloc(len + 1);
	if (!ret)
		return (0);
	if (start >= ft_strlen(s))
		return (ret);
	i = 0;
	while (i < len)
	{
		ret[i] = p[start + i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
/*
#include <stdio.h>
int	main(void)
{
	char * s = "the longer string";
	printf("%s\n", ft_substr(s, 5, 4));
	return 0;
}
 */
