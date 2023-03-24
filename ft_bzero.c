#include <stddef.h>

void	ft_bzero(void *s, size_t n) 
{
	unsigned char *p;
	size_t i; 

	*p = s;
	i = 0;
	while (i < n)
	{
		*(char *)(p + i) = 0;
		i++;
	}
}

