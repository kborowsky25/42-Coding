#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    int j;

    i = 1;
    j = 0;
    if (argc < 1)
    {
        return 0;
    }
    while (i < argc)
    {
        while (argv[i][j] != '\0')
        {
            write(1, &argv[i][j], 1);
            j++;
        }
        i++;
        write(1, "\n", 1);
        j = 0;
    }
}