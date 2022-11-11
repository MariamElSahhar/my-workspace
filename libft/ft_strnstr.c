/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:25:38 by melsahha          #+#    #+#             */
/*   Updated: 2022/11/11 18:33:30 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i ++;
	}
	return (0);
}

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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	char	*p;
	int		nsize;

	p = (char *) haystack;
	i = 0;
	nsize = ft_strlen(needle);
	while (i + nsize < len)
	{
		if (ft_strncmp(p, needle, nsize) == 0)
			return (p);
		i++;
		p++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>
int main()
{
	char *a = "finding in this string";
	char *b = "fin";
	printf("%s\n",ft_strnstr(a, b, 5));
	printf("%s\n",strnstr(a, b, 5));
	return 0;
}
 */
