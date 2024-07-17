/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborowsk <kborowsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:34:14 by kborowsk          #+#    #+#             */
/*   Updated: 2024/07/11 19:36:54 by kborowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// int ft_strlen(char *str);

// int main(void)
// {
// 	char *str = "hello";
// 	int count = ft_strlen(str);
// 	printf("%i", count);
// }

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != 0)
	{
		count++;
	}
	return (count);
}
