#include <stddef.h>
void	*memchr(const void *s, int c, size_t n)
{
	const char *str = (const char *) s;

	while(n--)
	{
		if(*str == (char)c)
			return((void *)str);
		str++;
	}
	return(NULL);
}

