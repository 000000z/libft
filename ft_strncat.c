#include <stddef.h>
char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while(dest[j])
		j++;
	while(i < n && src[i])
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
