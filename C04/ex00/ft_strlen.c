#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char *string = "Hello";
    int number = ft_strlen(string);
    printf("%i", number);
}

int ft_strlen(char *str)
{
    int count = 0;
    while (str[count] != 0)
    {
        count++;
    }
    return count;
}