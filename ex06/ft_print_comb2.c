/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborowsk <kborowsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:02:26 by kborowsk          #+#    #+#             */
/*   Updated: 2024/07/11 13:02:21 by kborowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

int	main(void)
{
	ft_print_comb2();
	return (0);
}

void	ft_print_comb2(void)
{
	char	array [7];
	int		one;
	int		two;

	one = 0;
	while (one < 99)
	{
		two = one + 1;
		while (two <= 99)
		{
			array[0] = 48 + (one / 10);
			array[1] = 48 + (one % 10);
			array[2] = ' ';
			array[3] = 48 + (two / 10);
			array[4] = 48 + (two % 10);
			array[5] = ',';
			array[6] = ' ';
			if (!(one == 98 && two == 99))
				write(1, &array, 7);
			else
				write(1, &array, 5);
			two += 1;
		}
		one += 1 ;
	}
	write(1, "\n", 1);
}
