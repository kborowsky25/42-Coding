/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborowsk <kborowsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:48:02 by kborowsk          #+#    #+#             */
/*   Updated: 2024/07/16 12:48:17 by kborowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* #include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char src [] = "Way too long";
	char dest [] = "woah";
	ft_strcpy(dest, src);
	for(int i =0; i < strlen(dest); i++)
	{
		printf("%c", dest[i]);
	}
}
 */
char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != 0)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
