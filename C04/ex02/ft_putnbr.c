/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kikiboro <kikiboro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:37:45 by kikiboro          #+#    #+#             */
/*   Updated: 2024/07/24 17:07:44 by kikiboro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void ft_putnbr(int nb);
int ft_write(char c);

// int main(void)
// {
//     int nb = 234;
//     ft_putnbr(nb);
// }

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_write('-');
        ft_write('2');
        ft_putnbr(147483648);
    }
    else if (nb < 0)
    {
        ft_write('-');
        nb = -nb;
        ft_putnbr(nb);
    }
    else if (nb <= 9)
    {
        ft_write(nb + 48);
    }
    else 
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}

int ft_write(char c)
{
    write(1, &c, 1);
    return 0;
}