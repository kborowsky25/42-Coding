/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborowsk <kborowsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:51:25 by kborowsk          #+#    #+#             */
/*   Updated: 2024/07/16 12:51:49 by kborowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
	char *str = "";
	int result = ft_str_is_lowercase(str);
	return result;
} */

int	ft_str_is_lowercase(char *str)
{
	int	counter;

	counter = 0;
	if (str[counter] == '\0')
	{
		return (1);
	}
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
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
