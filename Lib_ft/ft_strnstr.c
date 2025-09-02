#include "libft.h"

char *ft_strnstr(const char *str, const char *search, size_t size)
{
    int str_len = 0;
    int search_len = 0;
    int count = 0;
    int t = 0;

    for (; str[str_len]; str_len++);
    for (; search[search_len]; search_len++);
    if (!search)
        return ((char *) str);
    for (int i = 0; str[i + search_len - 1]; i++)
    {
        for (t = i, count = 0; count < size && str[t] == search[count] && search[count]; t++, count++);
        if (count == size || count == search_len)
            return ((char *) &str[i]);
    }
    return (NULL);
}