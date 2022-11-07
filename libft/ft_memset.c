/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:16:48 by melsahha          #+#    #+#             */
/*   Updated: 2022/11/07 18:16:48 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *p = s;
	while (n > 0)
	{
		*p = (unsigned char) c;
		p ++;
		n --;
	}
	return (s);
}
