
#include <stdio.h>
#include <stdlib.h>
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	n;

	i = 0;
	sign = 1;
	n = 0;

	if (str[i] == '\0')
		return(0);
	while (str[i] >= 9 && str[i] <= 13 || str[i] == ' ')
	{
		i++;
	}
	if(str[i] == '-')
	{
		sign = sign * -1;
	}
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - '0';
		i++;
	}
	return(n * sign);
}
/*
int	main(void)
{
	const char str[] = "  -1234abcd";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(" -134abcd"));
	return(0);
}*/
