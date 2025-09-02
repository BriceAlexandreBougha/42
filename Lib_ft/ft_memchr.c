#include "libft.h"

void *ft_memchr(const void *data, int c, size_t size)
{
    const unsigned char *str;

	str = (const unsigned char *) data;
    for (size_t i = 0; str[i] && i < size; i++)
        if (str[i] == c)
            return ((void *) &str[i]);
    return (NULL);
}