#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t len)
{
	const unsigned char *source;
	unsigned char *dest;

	if (!dst && !src && len > 0)
		return (NULL);
	dest = (unsigned char *) dst;
	source = (const unsigned char *) src;
	for (size_t i = 0 ; i < len; i++)
		dest[i] = source[i];
	return (dst);
}