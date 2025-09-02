#include "libft.h"

static int my_strncmp(const char *str1, const char *str2, size_t n)
{
    int i = 0;

    if (n == 0)
        return (0);
    for (; i < n && str1[i] && str2[i]; i++)
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
    if (i < n)
        return (str1[i] - str2[i]);
    return (0);
}

int ft_atoi(const char *str)
{
    int i = 0;
    int nb = 0;
    int signe = 1;

    if (my_strncmp("-2147483648", str, 11) == 0)
        return (-2147483648);
    for (; str[i] == ' '; i++);
    if (str[i] == '-') {
        signe = -1;
        i++;
    } else if (str[i] == '+')
        i++;
    for (; str[i] >= '0' && str[i] <= '9'; i++)
    {
        nb += str[i] - '0';
        if (str[i + 1] >= '0' && str[i + 1] <= '9')
            nb *= 10;
    }
    return (nb * signe);
}