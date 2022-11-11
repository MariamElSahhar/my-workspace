/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:12:29 by melsahha          #+#    #+#             */
/*   Updated: 2022/11/11 19:36:39 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

int	isin(char s, const char *c)
{
	int		i;
	int		size;

	size = ft_strlen(c);
	i = 0;
	while (i <= size)
	{
		if (s == c[i])
			return (1);
		i ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	char	*ret;
	int		i;
	int		j;
	int		size;

	p = (char *) s1;
	i = 0;
	j = 0;
	size = ft_strlen(s1);
	ret = (char *)malloc(size);
	if (!ret)
		return (0);
	while (i < size && isin(p[i], set))
		i++;
	while (i < size)
		ret[j++] = p[i++];
	while (j >= 0 && isin(ret[j], set))
		ret[j--] = 0;
	return (ret);
}

/* #include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strtrim("123numbers s23 fsfasdfk`122", "123"));
	return 0;
}
 */
