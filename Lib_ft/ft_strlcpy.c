#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t len = 0;
    int i = 0;

    for (; src[len]; len++);
    if (size == 0)
        return (len);
    for (; i < size && src[i]; i++) {
        dst[i] = src[i];
    }
    dst[i] = '\0';
    return (len);
}