/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kikiboro <kikiboro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:17:44 by kikiboro          #+#    #+#             */
/*   Updated: 2024/07/23 12:46:24 by kikiboro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int main(void)
{
	char dest [] = "Hello ";
	char src [] = "Goodbye";
	char *string = ft_strcat(dest, src);
	printf("%s", string);
}
 */
char	*ft_strcat(char *dest, char *src)
{
	int	counter_dest;
	int	counter_src;

	counter_dest = 0;
	counter_src = 0;
	while (dest[counter_dest] != 0)
	{
		counter_dest++;
	}
	while (src[counter_src] != 0)
	{
		dest[counter_dest + counter_src] = src[counter_src];
		counter_src++;
	}
	dest[counter_dest + counter_src] = 0;
	return (dest);
}
