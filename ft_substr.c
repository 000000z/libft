#include <stdlib.h>
#include <stddef.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char const *str;
	size_t	i;
	
	i = 0;
	if(len == 0)
		return (NULL);
	str = malloc(sizeof(char) * len + 1);
	while(len--)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return(str);

}
