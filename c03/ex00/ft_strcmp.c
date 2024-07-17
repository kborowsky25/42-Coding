#include <unistd.h>

int	ft_strcmp(char *s1, char *s2);

int main(void)
{
	char s1 [] = "Hello";
	char s2 [] = "hello";
	int result = ft_strcmp(s1, s2);
	return result;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while(s1[count] != '\0' && s2[count] != '\0' && s1[count] == s2[count])
	{
		count++;
	}
	return (s1[count] - s2[count]);
}



