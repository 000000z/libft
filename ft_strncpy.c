#include <stddef.h>
char	*strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while(i < n && str[i])
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
