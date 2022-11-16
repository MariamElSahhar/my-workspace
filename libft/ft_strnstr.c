/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:25:38 by melsahha          #+#    #+#             */
/*   Updated: 2022/11/16 21:33:52 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	nsize;
	char	*p;
	char	*n;

	p = (char *) haystack;
	n = (char *) needle;
	i = 0;
	nsize = ft_strlen(needle);
	if (!n[i] && !len)
		return (p);
	while (i + nsize <= len)
	{
		if (ft_strncmp(p, needle, nsize) == 0)
			return (p);
		i++;
		p++;
	}
	return (0);
}

/* #include <string.h>
int main()
{
	char *a = "finding in string";
	char *b = "";
	size_t	len = 17;
	printf("%s\n",ft_strnstr(a, a, len));
	printf("%s\n",strnstr(a, a, len));
	return 0;
}
 */
