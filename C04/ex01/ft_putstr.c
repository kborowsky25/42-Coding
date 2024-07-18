#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str);

int main(void)
{
    char *str = "character";
    ft_putstr(str);
}

void ft_putstr(char *str)
{
    int count = 0;

    while (str[count] != 0)
    {
        write(1, &str[count], 1);
        count++;
    }
}