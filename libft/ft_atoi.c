/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:31:36 by melsahha          #+#    #+#             */
/*   Updated: 2022/11/11 17:26:29 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	res;
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	res = 0;
	while (str[i] <= '9' && str[i] >= '0')
	{
		res = res * 10 + (int) str[i] - 48;
		i++;
	}
	return (sign * res);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a[] = "-2147483647";
	printf("%d\n", ft_atoi(a));
	printf("%d\n", atoi(a));
	return 0;
}

 */
