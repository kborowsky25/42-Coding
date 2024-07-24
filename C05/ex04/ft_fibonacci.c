#include <unistd.h>
// #include <stdio.h>

// int ft_fibonacci(int index);

// int main(void)
// {
//     int index = 10;
//     int result = ft_fibonacci(index);
//     printf("%i", result);
// }

int ft_fibonacci(int index)
{
  if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
  return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}