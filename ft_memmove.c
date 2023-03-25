#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *destination = (char *) dest;
	const char *source = (const char *) src;
	char tmp[n];
	size_t	i;

	i = 0;
	while(n--)
	{
		tmp[i] = source[i];
		i++;
	}
	i = 0;
	while(tmp[i])
	{
		destination[i] = tmp[i];
		i++;
	}

	return(dest);
}
