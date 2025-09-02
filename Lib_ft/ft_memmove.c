#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t size)
{
	const unsigned char *source;
	unsigned char *dest;

	source = (const unsigned char *) src;
	dest = (unsigned char *) dst;
	if (dest == source)
		return (dst);
	if (dest > source)
		for (; size; dest[size] = source[size], size--);
	else
		for (; size && *dest && *source; *dest++ = *source++, size--);
	return (dst);
}