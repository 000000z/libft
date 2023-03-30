#include <stddef.h>
void    *ft_memset(void *ptr, int value, size_t num)
{
        size_t  i;
        char *p = (char *) ptr;

        i = 0;
        while(i < num)
        {
                p[i] = value;
                i++;
        }
        return (ptr);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;

	ptr = malloc(sizeof(nmemb * size) + 1);
	if(ptr != NULL)
		ft_memset(ptr, 0, nmemb * size);
	return(ptr);
}
