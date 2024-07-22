#include <unistd.h>
#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main(void)
{
    int nb = 8;
    int power = 3;
    int result = ft_recursive_power(nb, power);
    printf("%i", result);
}

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
    {
        return 0;
    }
    else if (power == 0 && nb == 0)
    {
        return 1;
    }
    if (power < 1)
    {
        return 1;
    }
    else
    {
         nb *= ft_recursive_power(nb, power - 1);
    }
    return (nb);

}