#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb);

int main(void)
{
    int number = 9;
    int res = ft_iterative_factorial(number);
    printf("%i", res);
}

int ft_iterative_factorial(int nb)
{
    int result;

    result = 1;
    while (nb > 1)
    {
        result *= nb;
        nb--;
    }
    return result;
}

