#include <stddef.h>
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	while (dst[i] != '\0' && i < size)
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && i + j + 1 < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
	{
		dst[i + j] = '\0';
	}
	while (src[j] != '\0')
	{
		j++;
	}
	return i + j;
}

