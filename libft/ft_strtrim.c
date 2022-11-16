/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:12:29 by melsahha          #+#    #+#             */
/*   Updated: 2022/11/16 20:42:41 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isin(char s, const char *c)
{
	int		i;
	int		size;

	size = ft_strlen(c);
	i = 0;
	while (i < size)
	{
		if (s == c[i])
			return (1);
		i ++;
	}
	return (0);
}

size_t	count_trims(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*p;

	if (!ft_strlen(set) || !ft_strlen(s1))
		return (0);
	i = 0;
	j = ft_strlen(s1) - 1;
	p = (char *) s1;
	while (i < j && isin(p[i], set))
		i++;
	while (j >= 0 && isin(p[j], set))
	{
		i++;
		j--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	char	*ret;
	size_t	i;
	size_t	j;
	size_t	size;

	p = (char *) s1;
	size = ft_strlen(s1) - count_trims(s1, set);
	ret = (char *)malloc(size + 1);
	if (!ret)
		return (0);
	i = 0;
	j = 0;
	while (i < size && isin(p[i], set))
		i++;
	while (j < size)
		ret[j++] = p[i++];
	ret[j] = '\0';
	return (ret);
}

/* #include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strtrim("   \n\n    \n   ", "\n"));
	return 0;
}
 */

