/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborowsk <kborowsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:55:47 by kborowsk          #+#    #+#             */
/*   Updated: 2024/07/16 12:56:25 by kborowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h>

char	*ft_strcapitalize(char *str);

int main(void)
{
	char str [] = "hELLO ca va bb?";
	char *output = ft_strcapitalize(str);
	int i = 0;
	while (output[i] != 0)
	{
		printf("%c", output[i]);
		i++;
	}
}
 */
char	*ft_strcapitalize(char *str)
{
	int	counter;
	int	flip;

	counter = 0;
	flip = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
		{
			if (flip == 0)
			{
				str[counter] = str[counter] - 32;
				flip = 1;
			}
		}
		else if (str[counter] >= 'A' && str[counter] <= 'Z')
		{
			if (flip == 1)
				str[counter] = str[counter] + 32;
			else
				flip = 1;
		}
		else
			flip = 0;
		counter++;
	}
	return (str);
}
