#include <unistd.h>
#include <stdio.h>

void ft_write(int argc, char **argv);
int ft_ascii(char *a, char *b);
void ft_swap(char **a, char **b);

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        return 0;
    }
    
    int i = 1;
    
    while (i < argc)
    {
        int j = i + 1;
        while (j < argc)
        {
            if (ft_ascii(argv[i], argv[j]) < 0)
            {
                j++;
            }
            else if (ft_ascii(argv[i], argv[j]) > 0)
            {
                ft_swap(&argv[i], &argv[j]);
                j++;
            }
        }
        i++;
    }
    ft_write(argc, argv);
    return 0;
}

void ft_swap(char **a, char **b)
{
    char *temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int ft_ascii(char *a, char *b)
{
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0')
    {
        if (a[i] != b[i])
        {
            return a[i] - b[i];
        }
        i++;
    }
    return a[i] - b[i];
}

void ft_write(int argc, char **argv)
{
    int i = 1;
    while (i < argc)
    {
        int j = 0;
        while (argv[i][j])
        {
            write(1, &argv[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}
