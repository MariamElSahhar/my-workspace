/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:53:36 by melsahha          #+#    #+#             */
/*   Updated: 2022/11/14 18:42:09 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	int		size;

	size = 0;
	while (src[size])
		size++;
	str = (char *) malloc(size + 1);
	if (!str)
		return (0);
	str[size] = '\0';
	while (src[size - 1])
	{
		str[size - 1] = src[size - 1];
		size--;
	}
	return (str);
}

/* #include <stdio.h>
int main()
{
	char *b = "hello!";

	char *a = ft_strdup(b);
	printf("%s\n%s\n",b,a);
	return 0;
}
 */
