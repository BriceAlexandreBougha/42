#include "libft.h"

char *ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
    int len = 0;
    char *new_str;

    for (; str[len]; len++);
    new_str = malloc(sizeof(char) * len);
    if (!new_str)
        return (NULL);
    for (unsigned int i = 0; str[i]; i++)
        new_str[i] = f(i, str[i]);
    new_str[len] = '\0';
    return (new_str);
}