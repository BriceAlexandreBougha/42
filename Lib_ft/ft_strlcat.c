#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t d_len = 0;
    size_t s_len = 0;
    int i = 0;

    for (; dst[d_len]; d_len++);
    for (; src[s_len]; s_len++);
    for (; i < size && src[i]; i++)
        dst[d_len + i] = src[i];
    dst[d_len + i] = '\0';
    return ((d_len > size) ? (s_len + d_len) : (s_len + size));
}