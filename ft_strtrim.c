#include <stdlib.h>

int		ft_strlen(char const *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

int		ft_char_in_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	int		i;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_char_in_set(s1[start], set))
		start++;
	while (end >= start && ft_char_in_set(s1[end], set))
		end--;
	len = end - start + 1;
	if (!(trimmed = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (++i < len)
		trimmed[i] = s1[start + i];
	trimmed[len] = '\0';
	return (trimmed);
}

