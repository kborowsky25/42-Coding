/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborowsk <kborowsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:29:10 by kborowsk          #+#    #+#             */
/*   Updated: 2024/07/11 19:37:04 by kborowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// void ft_putstr(char *str);

// int main(void)
// {
// 	char *str = "HELLO!\n";
// 	ft_putstr(str);
// }

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != 0)
	{
		write(1, &str[count], 1);
		count++;
	}
}
