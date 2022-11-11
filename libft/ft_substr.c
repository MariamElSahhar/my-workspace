/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:55:55 by melsahha          #+#    #+#             */
/*   Updated: 2022/11/11 19:05:07 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	char	*p;
	size_t	i;

	p = (char *) s;
	ret = (char *) malloc(len);
	if (!ret)
		return(0);
	i = 0;
	while (i < len)
	{
		ret[i] = p[start + i];
		i++;
	}
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
