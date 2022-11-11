/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:39:31 by melsahha          #+#    #+#             */
/*   Updated: 2022/11/11 19:39:57 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


char	**ft_split(char const *s, char c)
{
	
}

#include <stdio.h>
int	main(void)
{
	char str[] = "Hello";
	char sep = 'l';
	char **res = ft_split(str, sep);
	int i = 0;
	while(res[i])
	{
		printf("%s\n", res[i]);
		i ++;
	}
	printf("%s\n", res[i]);


	return (0);
}
