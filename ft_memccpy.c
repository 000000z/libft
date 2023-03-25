#include <stddef.h>
void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *destination = (char *) dest;
	const char *source = (const char *) src;

	while(n--)
	{
		if ((*destination++ = *source++) == c) 
		{
			return (destination);
		}
	}
	return (NULL);
}
}
