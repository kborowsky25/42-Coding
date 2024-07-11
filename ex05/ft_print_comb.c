/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborowsk <kborowsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:02:14 by kborowsk          #+#    #+#             */
/*   Updated: 2024/07/11 13:00:43 by kborowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	ft_print_comb(void);

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }

void	ft_print_comb(void)
{
	char	one;
	char	two;
	char	three;

	one = '0';
	while (one <= '7')
	{
		two = one + 1;
		while (two <= '8')
		{
			three = two + 1;
			while (three <= '9')
			{
				write(1, &one, 1);
				write(1, &two, 1);
				write(1, &three, 1);
				if (one != '7')
					write(1, ", ", 2);
				three++;
			}
			two++;
		}
		one++;
	}
}
