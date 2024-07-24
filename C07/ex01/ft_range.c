#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int main(void)
{
    int min = -245;
    int max = 235;
    int *pointer = ft_range(min, max);
    int i;
        for (i = 0; i < (max - min); i++)
        {
            printf("%d ", pointer[i]);
        }
    printf("\n");
    free(pointer);
}

int *ft_range(int min, int max)
{
    if (min >= max)
    {
        return NULL;
    }

    int diff = max - min;
    int i = 0;

    int *pointer = malloc(sizeof(int) * diff);
    while (i < diff)
    {
        pointer[i] = min;
        i++;
        min++;
    }
    return (pointer);
}