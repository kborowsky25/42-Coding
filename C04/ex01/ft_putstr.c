/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kikiboro <kikiboro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:36:57 by kikiboro          #+#    #+#             */
/*   Updated: 2024/07/21 17:37:32 by kikiboro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

// void ft_putstr(char *str);

// int main(void)
// {
//     char *str = "character";
//     ft_putstr(str);
// }

void ft_putstr(char *str)
{
    int count;
    
    count = 0;
    while (str[count] != 0)
    {
        write(1, &str[count], 1);
        count++;
    }
}