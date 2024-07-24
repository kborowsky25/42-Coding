/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kikiboro <kikiboro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:18:07 by kikiboro          #+#    #+#             */
/*   Updated: 2024/07/23 12:46:12 by kikiboro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>


// unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

// int main(void)
// {
// 	char dest [] = "Hello";
// 	char src [] = "Goodbye";
// 	unsigned int size = 8;
// 	char *string = ft_strlcat(dest, src, size);
// 	printf("%s", string);
// }
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	counter_dest;
	unsigned int	counter_src;
	int i;

	counter_dest = 0;
	counter_src = 0;
	i = 0;
	while (dest[counter_dest] != 0 && counter_dest < size)
	{
		counter_dest++;
	}
	while (src[counter_src] != 0)
        counter_src++;
		
	if (size <= counter_dest)
	{
		return (size + counter_src);
	}
	
	while (src[i] != 0 && counter_src < size)
	{
		dest[counter_dest + i] = src[i];
		i++;
	}
	dest[counter_dest + counter_src] = 0;
	return (counter_dest + counter_src);
}

