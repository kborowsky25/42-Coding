#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
    int min = -245;
    int max = 235;
    int *tab;
    int size = ft_ultimate_range(&tab, min, max);
    printf("%i", size);
    printf("\n");
    free(tab);
    return 0;
}


int ft_ultimate_range(int **range, int min, int max)
{
    if (min >= max)
    {
        return 0;
    }

    int diff = max - min;
    int i = 0;

    *range = malloc(sizeof(int) * diff);
    while (i < diff)
    {
        (*range)[i] = min;
        i++;
        min++;
    }
    return (diff);
}