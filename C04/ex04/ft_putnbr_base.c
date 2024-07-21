/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kikiboro <kikiboro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:39:11 by kikiboro          #+#    #+#             */
/*   Updated: 2024/07/21 18:19:18 by kikiboro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

// void ft_putnbr_base(int nbr, char *base);
int ft_valid(char *base);
void ft_write(char c);
int ft_count(char *string);

// int main(void)
// {
//     int nbr = 234;
//     char *base = "0123456789"; // binary 
//     ft_putnbr_base(nbr, base);
// }

void ft_putnbr_base(int nbr, char *base)
{

	int	len;
	int	error;
	long	nb;

	error = ft_valid(base);
	len = ft_count(base);
	nb = nbr;
	if (error == 1)
	{
		if (nb < 0)
		{
			ft_write('-');
			nb *= -1;
		}
		if (nb < len)
			ft_write(base[nb]);
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base);
			ft_putnbr_base(nb % len, base);
		}
	}
}

int ft_valid(char *base)
{
    int count = 0;
    int x;

    if (base[0] == '\0' || ft_count(base) == 1)
        return 0;
    while (base[count] != 0)
    {
        if (base[count] == 43 || base[count] == 45 || base[count] <= 32 || base[count] == 127)
            return 0;
        x = count + 1;
        while (x < ft_count(base))
        {
            if (base[count] == base[x])
                return 0;
            x++;
        }
        count++;
    }
    return 1;
}

void ft_write(char c)
{
    write(1, &c, 1);
}

int ft_count(char *string)
{
    int count = 0;

    while (string[count] != 0)
    {
        count++;
    }
    return (count);
}