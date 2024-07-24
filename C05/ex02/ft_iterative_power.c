#include <unistd.h>
// #include <stdio.h>

// int ft_iterative_power(int nb, int power);

// int main(void)
// {
//     int nb = 2;
//     int power = 4;
//     int result = ft_iterative_power(nb, power);
//     printf("%i", result);
// }

int ft_iterative_power(int nb, int power)
{
    int def = 1;
    if (power > 0)
    {
        while (power > 0)
        {
            def *= nb;
            power--;
        }
        return (def);
    }
    else if (power == 0 && nb == 0)
    {
        return 1;
    }
    else if (power == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}