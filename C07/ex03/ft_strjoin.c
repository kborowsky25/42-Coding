#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
    int size = 5;
    char *sep = " ";
    char *strs [] = {"Hello", "My", "Name", "Is", "Kilian"};
    char *ans = ft_strjoin(size, strs, sep);
    printf("%s", ans);
    if (ans != NULL) {
        printf("%s\n", ans);
        free(ans); // Free the allocated memory
    }

    return 0;
}

char *ft_strjoin(int size, char **strs, char *sep)
{

    if (size <= 0) return NULL; 
    int i = 0;
    int j = 0;
    int length_total = 0;

    while (i < size)
    {
        while (strs[i][j] != '\0')
        {
            length_total++;
            j++;
        }
        i++;
    }
    i = 0;
    while (sep[i] != '\0')
    {
        length_total++;
        i++;
    }
    length_total++;
    char *ans = malloc(sizeof(char) * length_total);

    i = 0;
    j = 0;
    while (i < size)
    {
        while (strs[i][j] != '\0')
        {
            ans[i + j] = strs[i][j];
            j++;
        }
        j = 0;
        i++;
    }
    return (ans);
}