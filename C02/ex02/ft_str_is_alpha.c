/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborowsk <kborowsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:49:04 by kborowsk          #+#    #+#             */
/*   Updated: 2024/07/16 12:50:22 by kborowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* #include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
	char *str = "hello";
	int result = ft_str_is_alpha(str);
	return result;
}
 */
int	ft_str_is_alpha(char *str)
{
	int	counter;

	counter = 0;
	if (str[counter] == 0)
	{
		return (1);
	}
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 'a' && str[counter] <= 'z')
			|| (str[counter] >= 'A' && str[counter] <= 'Z'))
		{
			counter ++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
