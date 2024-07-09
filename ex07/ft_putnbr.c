/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborowsk <kborowsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:02:38 by kborowsk          #+#    #+#             */
/*   Updated: 2024/07/09 14:07:20 by kborowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	ft_putnbr(int nb);

// int	main(void)
// {
// 	int	number;

// 	number = -2567;
// 	ft_putnbr(number);
// 	return (0);
// }

void	ft_putnbr(int nb)
{
	char	c;
	char	minus;
	int		nb_pos;

	if (nb < 9 && nb >= 0)
	{
		c = nb + 48;
		write(1, &c, 1);
	}
	else if (nb < 0)
	{
		minus = '-';
		write(1, &minus, 1);
		nb_pos = -nb;
		ft_putnbr(nb_pos);
	}
	else if (nb > 0)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
