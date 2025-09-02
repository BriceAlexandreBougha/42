#include "libft.h"

char *ft_itoa(int nb)
{
    int malloc_len = 0;
    int tmp = nb;
    int neg = 0;
    char *str;

    for (; tmp != 0; tmp /= 10, malloc_len++);
    str = malloc(sizeof(char) * (malloc_len + 2));
    if (nb < 0) {
        neg = 1;
        nb *= -1;
        str[0] = '-';
    } else if (nb == 0)
        return ("0");
    str[malloc_len + neg] = '\0';
    for (int t = 0, tmp = nb; malloc_len > 0; t++, malloc_len--, tmp = nb) {
        for (int i = 1; i < malloc_len; i++, tmp /= 10);
        for (int i = 0; i < t; i++, tmp %= 10);
        str[t + neg] = tmp + '0';
    }
    return (str);
}