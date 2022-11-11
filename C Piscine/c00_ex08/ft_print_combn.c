/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:04:41 by melsahha          #+#    #+#             */
/*   Updated: 2022/09/18 19:01:14 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//arr has all numbers
//n is number of combination digits
//curr is current combination to be printed
//digits keeps track of size of curr
void print_recurs(int arr[], int curr[], int n, int digits, int i)
{
	char c;
	//base case is to print current combination such as "01" or "0123456789"
	if (digits == n) {
		//write digits, this is a combination like "01"
		while(digits>0){
			c = 48 + curr[n - digits];
			write(1, &c, 1);
			digits --;
		}
		write(1, " ", 1);
		return;
	}
	//filling in to get the current combinationcea
	while(){
		curr[i] = arr[i];
		print_recurs(arr, curr, n, digits + 1, i + 1);
	}

}
void	ft_print_combn(int n)
{
	int		arr[10];
	int		i;
	int		curr[n];

	i = 0;
	while (i<=9){
		arr[n] = 0+i;
		i++;
	}
	print_recurs(arr, curr, n, 0, 0);
}

int main(void){
	ft_print_combn(4);
	return 0;
}
