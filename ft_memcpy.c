#include <stddef.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *destination = (char *)dest;
	const char *source = (const char *)src;
	
	while(n--)
	{
		*destination = *source;
		source++;
		destination++;
	}
	return (dest);
}
