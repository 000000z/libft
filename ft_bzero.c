#include <stddef.h>

void	ft_bzero(void *s, size_t n) 
{
	size_t i; 

	unsigned char *p = (unsigned char *) s; 
	i = 0;
	while (i < n)
	{
		*(char *)(p + i) = 0;
		i++;
	}
}

