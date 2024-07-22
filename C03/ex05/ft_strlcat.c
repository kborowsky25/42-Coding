#include <unistd.h>
#include <stdio.h>


unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char dest [] = "Hello";
	char src [] = "Goodbye";
	unsigned int size = 8;
	char *string = ft_strlcat(dest, src, size);
	printf("%s", string);
}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	counter_dest;
	int	counter_src;

	counter_dest = 0;
	counter_src = 0;
	while (dest[counter_dest] != 0)
	{
		counter_dest++;
	}
	while (src[counter_src] != 0 && counter_src < size)
	{
		dest[counter_dest + counter_src] = src[counter_src];
		counter_src++;
	}
	dest[counter_dest + counter_src] = 0;
	return (dest);
}

}
