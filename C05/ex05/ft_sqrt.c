#include <unistd.h>
// #include <stdio.h>

// int ft_sqrt(int nb);

// int main(void)
// {
//     int nb = 36;
//     int ans = ft_sqrt(nb);
//     printf("%i", ans);
// }

int ft_sqrt(int nb)
{
    int option;

    option = 0;

    if (nb == 0)
    {
        return 0;
    }
    if (nb == 1)
    {
        return (1);
    }
    while (option * option < nb)
    {
        option ++;
    }
    if (option * option == nb)
    {
        return (option);
    }
    else
    {
        return (0);
    }
}