#include <stdio.h>
#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;
	int	d;

	d = 0;
	i = 0;
	j = 0;
	if(*needle == '\0')
		return ((char *)haystack);
	while(needle[d])
		d++;
	while (haystack[i])
	{
		while (haystack[i] == needle[j])
		{
			if (j == d - 1)
			{
				i = i - d + 1;
				return((char *)&haystack[i]);
			}
			i++;
			j++;
		}
		i = i - j + 1;
		j = 0;
	}
	return(NULL);
}

