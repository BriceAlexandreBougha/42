#include "libft.h"

char *ft_strdup(const char *src)
{
    char *dest;
    int len = 0;
    int i = 0;

    if (!src)
        return (NULL);
    for (; src[len]; len++);
    dest = malloc(sizeof(char) * len);
    for (; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}