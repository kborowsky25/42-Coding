/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborowsk <kborowsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:37:39 by kborowsk          #+#    #+#             */
/*   Updated: 2024/07/11 19:40:33 by kborowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// void ft_rev_int_tab(int *tab, int size);

// int main(void)
// {
// 	int size = 4;
// 	int array [4] = {1, 2, 3, 4};
// 	int *pointer = array;
// 	ft_rev_int_tab(pointer, size);
// 	for (int i = 0; i < size; i++)
//     {
//         printf("%d ", array[i]);
//     }
//     printf("\n");

// }

void	ft_rev_int_tab(int *tab, int size)
{
	int	rev_count;
	int	swap;

	rev_count = 0;
	while (rev_count < (size / 2))
	{
		swap = tab[rev_count];
		tab[rev_count] = tab[size -1 - rev_count];
		tab[size - 1 - rev_count] = swap;
		rev_count++;
	}
}
