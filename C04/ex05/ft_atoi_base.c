#include <unistd.h>
#include <stdio.h>

int ft_atoi_base(char *str, char *base);
void ft_check(char *base, int *pointer_check);
void ft_write(char result);
void ft_sign(char *str, int *pointer_count, int *pointer_sign);
int ft_count(char *base); 

int main(void)
{
    char *str = "   +---0101abc";
    char *base = "0123456789abcdef";
    int r = ft_atoi_base(str, base);
}

int ft_atoi_base(char *str, char *base)
{

    int count = 0;
    int sign = 1;
    int check = 0;
    int result = 0;
    
    int *pointer_count = &count;
    int *pointer_sign = &sign;
    int *pointer_check = &check;

    ft_sign(str, pointer_count, pointer_sign);
    int length = ft_count(base);
    ft_check(base, pointer_check);

    if (check == 0)
    {
        while (str[count] >= base[0] && str[count] <= base[length - 1])
        {
            if (str[count] >= '0' &&  str[count] <='9')
            {
                ft_write(str[count]);
                result *= 10;
                result += str[count] - 48; //only works for 1 to 9;
                count++;
            }
            else if (str[count] >= 'a' && str[count] <= 'z')
            {
                ft_write(str[count]);
                result *= 10;
                result += str[count] - 'a'; //only works for 1 to 9;
                count++;
            }
        }
        result = result * sign;
    }
    return result;
}

void ft_write(char result)
{
    write(1, &result, 1);
}

void ft_sign(char *str, int *pointer_count, int *pointer_sign)
{
    while (str[*pointer_count] == 32) //spaces
    {
        *pointer_count += 1;
    }
    while (str[*pointer_count] == '+' || str[*pointer_count] == '-') //minus and pluses
    {
        if (str[*pointer_count] == '-')
        {
            *pointer_sign *= -1;
        }
        *pointer_count += 1;
    }
}

int ft_count(char *base)
{
    int i = 0;

    while (base[i] != 0)
    {
        i++;
    }
    return i;
}

void ft_check(char *base, int *pointer_check)
{
    int count = 0;
    int x;

    if (base[0] == '\0' || ft_count(base) < 2)
    {
        *pointer_check = 1;
        return;
    }
    while (base[count] != 0)
    {
        if (base[count] == '+' || base[count] == '-')
        {
            *pointer_check = 1;
            return;
        }
        x = count + 1;
        while (base[x] != 0)
        {
            if (base[count] == base[x])
            {
                *pointer_check = 1;
                return;
            }
            x++;
        }
        count++;
    }
    *pointer_check = 0;
    return;
}