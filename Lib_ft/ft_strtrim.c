#include "libft.h"

static int my_strlen(char *str)
{
    int i = 0;
    for (; str[i]; i++);
    return (i);
}

char *ft_strtrim(char *str, char *set)
{
    int start = 0;
    int end = 0;
    char *new_str;
    int i = 0;

    for (; str[start] == set[start]; start++);
    for (int i = my_strlen(str) - my_strlen(set); str[i] == set[end]; i++, end++);
    new_str = malloc(sizeof(char) * (my_strlen(str) - start - end + 1));
    if (!new_str)
        return (NULL);
    for (; start < my_strlen(str) - end + 1; start++, i++)
        new_str[i] = str[start];
    new_str[i] = '\0';
    return (new_str);   
}