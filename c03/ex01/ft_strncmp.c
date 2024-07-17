#include <unistd.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char s1 [] = "Hello";
	char s2 [] = "hello";
	int n = 3;
	int result = ft_strncmp(s1, s2, n);
	return result;
}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	count;

	count = 0;
	while(s1[count] != '\0' && s2[count] != '\0'  && count < n)
	{
		if (s1[count] < s2[count])
		{
			return (-1);
		}
		if (s1[count] > s2[count])
		{
			return (1);
		}
		count++;
	}
	return (0);
}



