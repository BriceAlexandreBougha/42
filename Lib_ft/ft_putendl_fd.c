#include "libft.h"

void ft_putendl_fd(char *str, int fd)
{
    for(int i = 0; str[i]; i++)
        write(fd, &str[i], 1);
    write(fd, "\n", 1);
}