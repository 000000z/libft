#include <stddef.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char *pt = (char *) s;
	i = 0;
	while(i < n)
	{
		pt[i] = c;
		i++;
	}
	return(pt);
}
void	*calloc(size_t nmemb, size_t size)
{
	void *ptr;

	ptr = malloc(nmemb * size);
	if (ptr != NULL)
		ft_memset(ptr, 0, nmemb * size);
	return(ptr);
}
