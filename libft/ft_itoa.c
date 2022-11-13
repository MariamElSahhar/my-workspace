/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:46:32 by melsahha          #+#    #+#             */
/*   Updated: 2022/11/13 20:26:08 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	pow_ten(int index)
{
	if (index == 0)
		return (1);
	if (index == 1)
		return (10);
	return (10 * pow_ten(index - 1));
}

int	count_digits(long int n)
{
	int	num_digits;

	num_digits = 0;
	if (n < 0)
		n = n * -1;
	while (n > 1)
	{
		num_digits++;
		n = n / 10;
	}
	return (num_digits);
}

void	init_str(int i, char *res, long int n, int num_digits)
{
	while (num_digits > 0)
	{
		res[i] = 48 + (n / (pow_ten(num_digits - 1)));
		n = n % pow_ten(num_digits - 1);
		num_digits--;
		i++;
	}
	res[i] = '\0';
}

char	*ft_itoa(int n)
{
	int			num_digits;
	long int	num;
	char		*res;
	int			i;

	num_digits = count_digits((long int) n);
	if (n == 0)
		num_digits = 1;
	res = (char *)malloc(num_digits);
	if (!res)
		return (0);
	i = 0;
	num = n;
	if (n < 0)
	{
		res[i] = '-';
		i++;
		num = num * -1;
	}
	init_str(i, res, num, num_digits);
	return (res);
}

/*
#include <stdio.h>
int	main(void)
{
	int	n;

	n = 00;
	printf("%s\n", ft_itoa(n));
	return (0);
}
 */
