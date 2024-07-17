/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborowsk <kborowsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:48:37 by kborowsk          #+#    #+#             */
/*   Updated: 2024/07/16 12:48:47 by kborowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* #include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char src [] = "Way too long";
	char dest [] = "woah";
	unsigned int n = 5;
	char *ft_strncpy(dest, src, n);
	for(int i =0; i < strlen(dest); i++)
	{
		printf("%c", dest[i]);
	}
} */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	count;

	count = 0;
	while (src[count] != 0 && count < n)
	{
		dest[count] = src[count];
		count++;
	}
	while (count > n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
