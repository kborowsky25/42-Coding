#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src);

int main(void)
{
    char *src = "Bonjour!";
    char *ans = ft_strdup(src);
    printf("%s", ans);
}

char *ft_strdup(char *src)
{
    int size;

    size = 0;
    while (src[size] != '\0')
    {
        size++;
    }
    char *pointer = malloc(sizeof(char) * size);

    size = 0;
     while (src[size] != '\0')
    {
        pointer[size] = src[size];
        size++;
    }
    return pointer;
}