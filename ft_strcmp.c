int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if(s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return(0);	
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char s1[] = "ve(";
	const char s2[] = "ver";
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", strcmp(s1, s2));
	return(0);
}*/
