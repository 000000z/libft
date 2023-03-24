#include <stddef.h>

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
