/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborowsk <kborowsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:12:40 by kborowsk          #+#    #+#             */
/*   Updated: 2024/07/11 19:12:42 by kborowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// void ft_div_mod(int a, int b, int *div, int *mod);

// int main(void)
// {
// 	int division = 0;
// 	int modulus = 0;
// 	int* div = &division;
// 	int* mod = &modulus;
// 	int a = 25;
// 	int b = 3;
// 	ft_div_mod(a, b, div, mod);
// }

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
printf("%d\n", *div);
printf("%d", *mod);
*/
