#include <unistd.h>
// #include <stdio.h>

// int ft_recursive_factorial(int nb);

// int main(void)
// {
//     int number = 4;
//     int res = ft_iterative_factorial(number);
//     printf("%i", res);
// }

int ft_recursive_factorial(int nb)
{
    int result;

    result = 0;
    if (nb < 0)
    {
        return (0);
    }
    if (nb < 1)
    {
        return 1;
    }

    result += nb * ft_recursive_factorial(nb - 1);
    return result;
}

