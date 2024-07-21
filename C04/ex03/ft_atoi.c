/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kikiboro <kikiboro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:39:16 by kikiboro          #+#    #+#             */
/*   Updated: 2024/07/21 17:47:40 by kikiboro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int ft_whitespaces(int *count, char *str);
// int ft_atoi(char *str);

// int main(void)
// {
//     char *string = "   +---123454ello";
//     int r = ft_atoi(string);
//     printf("%i", r);
// }

int ft_atoi(char *str)
{
    int count; 
    int result; 
    int sign;

    count = 0;
    result = 0;

    sign = ft_whitespaces(&count, str);
    while(str[count] >= '0' && str[count] <= '9')
    {
        result *= 10;
        result += str[count] - 48;
        count++;
    }
    result *= sign;
    return result;
}

int ft_whitespaces(int *count, char *str)
{
    int sign;

    sign = 1;
    while (str[*count] == 32 || (str[*count] >= 9 && str[*count] <= 13 ))
    {
        *count += 1;
    }
    while (str[*count] == 43 || str[*count] == 45)
    {
        if (str[*count] == 45)
        {
            sign *= -1;
        }
        *count += 1;
    }
    return (sign);
}