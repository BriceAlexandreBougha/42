#include "libft.h"

void ft_striteri(char *str, char (*f)(unsigned int, char*))
{
    for (unsigned int i = 0; str[i]; i++)
        f(i, &str[i]);
}