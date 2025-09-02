#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    int s_len = 0;
    
    for (; str[s_len]; s_len++);
    for (int i = s_len - 1; i >= 0; i--)
        if (str[i] == c)
            return ((char *) &str[i]);
    return (NULL);
}