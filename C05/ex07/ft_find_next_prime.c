#include <unistd.h>
#include <stdio.h>

int ft_find_next_prime(int nb);

int main(void)
{
    int nb = 14;
    int res = ft_find_next_prime(nb);
    printf("%i", res);
}

int ft_find_next_prime(int nb)
{
    int i;
    int found;
    int counter;

    i = nb;
    found = 0; 
    counter = 2;
    if (nb == 0)
    {
        return 0;
    }
    if (nb == 1)
    {
        return 0;
    }
    counter = 2;
    while (counter < i)
    {
        if (i % counter == 0)
        {
            i++;
        }
        counter++;
    }
    return (i);
}