/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborowsk <kborowsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:01:44 by kborowsk          #+#    #+#             */
/*   Updated: 2024/07/09 14:07:05 by kborowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* void	ft_is_negative(int n);

int	main(void)
{
	int	n;

	n = 10;
	ft_is_negative(n);
	return (0);
} */

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 2);
	}
	else
	{
		write(1, "P", 2);
	}
}
