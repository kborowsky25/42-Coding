/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kikiboro <kikiboro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:17:51 by kikiboro          #+#    #+#             */
/*   Updated: 2024/07/23 12:46:20 by kikiboro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char dest [] = "Hello";
	char src [] = "Goodbye";
	unsigned int nb = 4;
	char *string = ft_strncat(dest, src, nb);
	printf("%s", string);
} */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	counter_dest;
	unsigned int	counter_src;

	counter_dest = 0;
	counter_src = 0;
	while (dest[counter_dest] != 0)
	{
		counter_dest++;
	}
	while (src[counter_src] != 0 && counter_src < nb)
	{
		dest[counter_dest + counter_src] = src[counter_src];
		counter_src++;
	}
	dest[counter_dest + counter_src] = 0;
	return (dest);
}
