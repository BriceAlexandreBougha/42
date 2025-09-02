#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    for (int i = 0; str[i]; i++)
        if (str[i] == c)
            return ((char *) &str[i]);
    return (NULL);
}