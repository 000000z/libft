#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t	i;
	char *p = (char *) ptr;

	i = 0;
	while(i < num)
	{
		p[i] = value;
		i++;
	}
	return (ptr);
}
int main(void) {
    char str[] = "Hello, world!";
    size_t n = sizeof(str) - 1;

    printf("Original string: %s\n", str);

    // Set the string to all uppercase characters
    ft_memset(str, 'A', n);

    printf("Modified string: %s\n", str);

    return 0;
}

