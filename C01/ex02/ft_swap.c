/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborowsk <kborowsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:11:40 by kborowsk          #+#    #+#             */
/*   Updated: 2024/07/11 19:12:12 by kborowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// void ft_swap(int *a, int *b);

// int main(void)
// {
// 	int A = 20;
// 	int B = 30;
// 	int* a = &A;
// 	int* b = &B;
// 	ft_swap(a, b);
// 	printf("%i, %i", A, B);
// }

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
