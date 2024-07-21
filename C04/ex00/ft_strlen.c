/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kikiboro <kikiboro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:35:57 by kikiboro          #+#    #+#             */
/*   Updated: 2024/07/21 17:37:16 by kikiboro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

// int ft_strlen(char *str);

// int main(void)
// {
//     char *string = "Hello";
//     int number = ft_strlen(string);
//     printf("%i", number);
// }

int ft_strlen(char *str)
{
    int count;
    
    count = 0;
    while (str[count] != 0)
    {
        count++;
    }
    return (count);
}