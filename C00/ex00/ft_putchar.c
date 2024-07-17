/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborowsk <kborowsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:00:46 by kborowsk          #+#    #+#             */
/*   Updated: 2024/07/08 13:36:45 by kborowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void	t_putchar(char c);

int	main(void)

{
	char	l;

	l = 'M';
	ft_putchar(l);
	return (0);
	}*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
