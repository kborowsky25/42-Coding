#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int count;

    count = 0;
    if (argc < 1)
    {
        return 1;
    }
    while (argv[0][count] != '\0')
    {
        write(1, &argv[0][count], 1);
        count++;
    }
    write(1, "\n", 1);
    return 0;
}

