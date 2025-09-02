#include "libft.h"

char *ft_strjoin(char const *str1, char const *str2)
{
    int s1_len = 0;
    int s2_len = 0;
    char *new_str;
    int i = 0;

    for (; str1[s1_len]; s1_len++);
    for (; str2[s2_len]; s2_len++);
    new_str = malloc(sizeof(char) * (s1_len + s2_len));
    if (!new_str)
        return (NULL);
    for (; str1[i]; i++)
        new_str[i] = str1[i];
    for (int t = 0; str2[t]; t++, i++)
        new_str[i] = str2[t];
    new_str[i] = '\0';
    return (new_str);
}