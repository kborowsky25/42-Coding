/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborowsk <kborowsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:02:26 by kborowsk          #+#    #+#             */
/*   Updated: 2024/07/09 14:07:16 by kborowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_print_comb2(void);

int	main(void)
{
	ft_print_comb2();
	return (0);
} */

void	ft_print_comb2(void)
{
	char	intochar1;
	char	intochar2;
	int		one;
	int		two;

	one = 0;
	while (one < 99)
	{
		two = one + 1;
		while (two <= 99)
		{
			intochar1 = 48 + (one / 10);
			intochar2 = 48 + (one % 10);
			write(1, &intochar1, 1);
			write(1, &intochar2, 1);
			write(1, " ", 2);
			intochar1 = 48 + (two / 10);
			intochar2 = 48 + (two % 10);
			write(1, &intochar1, 1);
			write(1, &intochar2, 1);
			write(1, ", ", 2);
			two += 1;
		}
		one += 1 ;
	}
}
