#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nb);
int ft_write(char c);

int main(void)
{
    int nb = 234;
    ft_putnbr(nb);
}

void ft_putnbr(int nb)
{
    int count = 0;
    int pos_num = 0;
    char intochar = ' ';

    if (nb >= 0 && nb <= 9)
    {
        intochar = nb + '0';
        ft_write(intochar);
    }
    if (nb < 0)
    {
        pos_num = -nb;
        ft_write('-');
        ft_putnbr(pos_num);
    }
    if (nb > 9)
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