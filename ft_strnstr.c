#include <stddef.h>

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;
    size_t  d;
    size_t  little_len;

    little_len = 0;
    d = 0;
    j = 0;
    i = 0;
    if (little[0] == '\0')
        return ((char *)big);
    while (little[little_len])
        little_len++;
    while (i < len)
    {
        while (big[i + j] == little[j] && i + j < len)
        {
            d++;
            if (d == little_len)
                return ((char *)big + i);
            j++;
        }
        i++;
        j = 0;
        d = 0;
    }
    return (NULL);
}

