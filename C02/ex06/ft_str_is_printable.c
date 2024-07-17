/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborowsk <kborowsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:52:44 by kborowsk          #+#    #+#             */
/*   Updated: 2024/07/16 12:52:59 by kborowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* #include <stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
	char *str = "";
	int result = ft_str_is_printable(str);
	return result;
}
 */
int	ft_str_is_printable(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= ' ' && str[counter] <= 126)
		{
			counter++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
