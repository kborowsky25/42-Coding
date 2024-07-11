/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborowsk <kborowsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:02:38 by kborowsk          #+#    #+#             */
/*   Updated: 2024/07/11 15:11:35 by kborowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	ft_putnbr(int nb);

// int	main(void)
// {
// 	int	number;

// 	number = -2147483648;
// 	ft_putnbr(number);
// 	return (0);
// }

void	ft_putnbr(int nb)
{
	char	c;
	int		nb_pos;

	if (nb < 9 && nb >= 0)
	{
		c = nb + 48;
		write(1, &c, 1);
	}
	else if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb_pos = -nb;
		ft_putnbr(nb_pos);
	}
	else if (nb > 0)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
