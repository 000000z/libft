#include <stdlib.h>
#include <stddef.h>
int	ft_strlen(char *s1)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	return(i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int len;
	int i;
	int j;
	char *str;

	if (s1 == NULL || s2 == NULL)
		return NULL;

	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc (sizeof(char) * (len + 1));

	if (str == NULL)
		return NULL;

	i = 0;
	while (s1[i] != '\0') {
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return str;
}
