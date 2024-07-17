/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborowsk <kborowsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:50:46 by kborowsk          #+#    #+#             */
/*   Updated: 2024/07/16 12:51:09 by kborowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* #include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
	char *str = "0987654321";
	int result = ft_str_is_numeric(str);
	return 0;
}
 */
int	ft_str_is_numeric(char *str)
{
	int	counter;

	counter = 0;
	if (str[counter] == '\0')
	{
		return (1);
	}
	while (str[counter] != '\0')
	{
		if (str[counter] >= '0' && str[counter] <= '9')
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
