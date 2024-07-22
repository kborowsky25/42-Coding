/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kikiboro <kikiboro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:18:00 by kikiboro          #+#    #+#             */
/*   Updated: 2024/07/22 10:18:01 by kikiboro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

// char	*ft_strstr(char *str, char *to_find);

// int main(void)
// {
// 	char str [] = "Hello my name is kiki";
// 	char to_find [] = "name";
// 	char *string = ft_strstr(str, to_find);
// 	printf("%s", string);
// }

char	*ft_strstr(char *str, char *to_find)
{
	int counter;
	int i;

	counter = 0;
	i = 0;
	if (to_find[counter] == 0)
	{
		return str;
	}
	while (str[counter] != 0)
	{
		while (str[counter + i] == to_find[i] && str[counter + i] != 0)
		{
			i++;
			if (to_find[i] == 0)
			{
				return (str + counter);
			}
		}
		i = 0;
		counter++;
	}
	return NULL;
}
