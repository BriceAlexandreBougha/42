#include "libft.h"

int ft_memcmp(const void *data1, const void *data2, size_t n)
{
    size_t i = 0;
    const unsigned char *str1;
    const unsigned char *str2;
    
    str1 = (const unsigned char *) data1;
    str2 = (const unsigned char *) data2;
    if (n == 0)
        return (0);
    for (; i < n && str1[i] && str2[i]; i++)
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
    if (i < n)
        return (str1[i] - str2[i]);
    return (0);
}