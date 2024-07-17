/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborowsk <kborowsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:53:14 by kborowsk          #+#    #+#             */
/*   Updated: 2024/07/16 12:54:22 by kborowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
	char str [] = "Hello";
	char *string = ft_strupcase(str);
} */

char	*ft_strupcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
		{
			str[counter] = str[counter] - 32;
		}
		counter++;
	}
	str[counter] = '\0';
	return (str);
}
