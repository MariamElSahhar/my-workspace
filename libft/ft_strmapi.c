/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:26:26 by melsahha          #+#    #+#             */
/*   Updated: 2022/11/13 20:33:39 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		size;
	char	*res;

	size = 0;
	while (s[size])
		size++;
	res = (char *)malloc(size);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}

/* #include <stdio.h>

char	ft_tolower(unsigned int i, char c)
{
	if (c >= 'A' && c <= 'Z' && i % 2 == 0)
		c += 32;
	return (c);
}

int	main(void)
{
	printf("%s", ft_strmapi("HELLO", ft_tolower));
	return(0);
}
 */
