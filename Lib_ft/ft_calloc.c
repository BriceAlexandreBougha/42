#include "libft.h"

void* ft_calloc(size_t num, size_t size)
{
    void *ptr;

    if (num == 0 || size == 0)
        return (NULL);
    ptr = malloc(size * num);
    if (!ptr)
        return (NULL);
    for (size_t i = 0; i < num; i++)
        *(unsigned char *)(ptr + i) = 0;
    return (ptr);
}