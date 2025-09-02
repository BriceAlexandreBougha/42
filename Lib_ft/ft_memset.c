#include "libft.h"

void *ft_memset(void *data, int c, size_t size)
{
	unsigned char *str;

	str = (unsigned char *) data;
	for (size_t i = 0; i < size && str[i]; i++)
		str[i] = c;
	return (data);
}