#include <unistd.h>
#include <stdio.h>

void ft_putnbr_base(int nbr, char *base);
int ft_valid(char *base, int nbr);
int ft_write(char c);
int ft_count(char *string);

int main(void)
{
    int nbr = 234;
    char *base = "01"; // binary 
    ft_putnbr_base(nbr, base);
}

void ft_putnbr_base(int nbr, char *base)
{
    int count = 0;
    int pos_num = 0;
    int valid = ft_valid(base, nbr);
    int len = ft_count(base);
    if (valid == 0)
    {
        if (nbr >= 0 && nbr < len)
        {
            ft_write(base[nbr]);
        }
        if (nbr < 0)
        {
            pos_num = -nbr;
            ft_write('-');
            ft_putnbr_base(pos_num, base);
        }
        if (nbr >= len)
        {
            ft_putnbr_base(nbr / len, base);
            ft_putnbr_base(nbr % len, base);
        }
    }
}

int ft_valid(char *base, int nbr)
{
    int count = 0;
    int x;

    if (base[0] == '\0' || ft_count(base) < 2)
    {
        return 1;
    }
    while (base[count] != 0)
    {
        if (base[count] == '+' || base[count] == '-')
        {
            return 1;
        }
        x = count + 1;
        while (base[x] != 0)
        {
            if (base[count] == base[x])
            {
                return 1;
            }
            x++;
        }
        count++;
    }
    return 0;
}

int ft_write(char c)
{
    write(1, &c, 1);
    return 0;
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