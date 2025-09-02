#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t i = 0;

    if (n == 0)
        return (0);
    for (; i < n && str1[i] && str2[i]; i++)
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
    if (i < n)
        return (str1[i] - str2[i]);
    return (0);
}