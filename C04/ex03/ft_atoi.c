#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str);

int main(void)
{
    char *string = "   +---123454ello";
    int r = ft_atoi(string);
    printf("%i", r);
}

int ft_atoi(char *str)
{
    int count = 0;
    int sign = 1;
    int result = 0;

    while (str[count] == 32)
    {
        count++;
    }
    while (str[count] == 43 || str[count] == 45)
    {
        if (str[count] == 45)
        {
            sign *= -1;
        }
        count++;
    }

    while(str[count] >= '0' && str[count] <= '9')
    {
        result *= 10;
        result += str[count] - 48;
        count++;
    }
    result *= sign;
    return result;
}