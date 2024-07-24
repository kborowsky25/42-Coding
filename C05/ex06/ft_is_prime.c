#include <unistd.h>
// #include <stdio.h>

// int ft_is_prime(int nb);

// int main(void)
// {
//     int nb = 1;
//     int res = ft_is_prime(nb);
//     printf("%i", res);
// }

int ft_is_prime(int nb)
{
    int counter;

    counter = 1;
    if (nb < 0)
    {
        return (0);
    }
    if (nb == 1)
    {
        return (0);
    }

    while (counter < nb)
    {
        if (nb % counter == 0 && counter != 1)
        {
            return 0;
        }
        counter++;
    }
    return (1);
}