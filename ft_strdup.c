#include <stdlib.h>
char	*ft_strdup(const char *s)
{
	int	i;
	char	*str;
	int	len;

	len = 0;
	i = 0;
	while(s[len])
	{
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (s[1] != '\0')
	{
		while(s[i])
		{
			str[i] = s[i];
			i++;
		}
	}
	return(str);
}
