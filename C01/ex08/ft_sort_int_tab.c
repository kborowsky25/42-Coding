/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborowsk <kborowsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:06:56 by kborowsk          #+#    #+#             */
/*   Updated: 2024/07/11 19:44:57 by kborowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

// void ft_sort_int_tab(int *tab, int size);

// int main(void)
// {
// 	int array [] = {2, 7, 4, 6, 13};
// 	int size = 5;
// 	ft_sort_int_tab(array, size);
// 		for (int i = 0; i < size; i ++)
// 	{
// 		printf("%d ", array[i]);
// 	}
// }

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp_var;
	int	count;
	int	n;

	count = 0;
	while (count < size)
	{
		n = count + 1;
		while (n < size)
		{
			if (tab[count] <= tab[n])
			{
				n++;
			}
			else if (tab[count] > tab[n])
			{
				temp_var = tab[count];
				tab[count] = tab[n];
				tab[n] = temp_var;
				n++;
			}
		}
		count++;
	}
}
