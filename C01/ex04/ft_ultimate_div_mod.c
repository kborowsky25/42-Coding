/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborowsk <kborowsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:34:38 by kborowsk          #+#    #+#             */
/*   Updated: 2024/07/11 19:34:40 by kborowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// void ft_ultimate_div_mod(int *a, int *b);

// int main(void)
// {
//     int A = 25;
//     int B = 3;
//     int* a = &A;
//     int* b = &B;
//     ft_ultimate_div_mod(a, b);
// }

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempa;
	int	tempb;

	tempa = *a;
	tempb = *b;
	*a = tempa / tempb;
	*b = tempa % tempb;
}

// printf("%d", *a);
// printf("%d", *b);
