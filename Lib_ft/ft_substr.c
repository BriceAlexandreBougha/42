#include "libft.h"

char *ft_substr(const char *str, unsigned int start, size_t len)
{
    char *tmp = malloc(sizeof(char) * (len + 1));
    size_t i = 0;

    if (!tmp)
        return (NULL);
    for (; i < len && str[start + i]; i++)
        tmp[i] = str[start + i];
    tmp[i] = '\0';
    return (tmp);
}