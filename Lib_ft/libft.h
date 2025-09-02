#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

/* ---- PART1 ---- */
int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
void* ft_calloc(size_t num, size_t size);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *ft_memchr(const void *data, int c, size_t size);
int ft_memcmp(const void *data1, const void *data2, size_t n);
void *ft_memmove(void *dst, const void *src, size_t size);
void *ft_memset(void *data, int c, size_t size);
char *ft_strchr(const char *str, int c);
char *ft_strdup(const char *src);
size_t ft_strlcat(char *dst, const char *src, size_t size);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
int ft_strlen(char *str);
int ft_strncmp(const char *str1, const char *str2, size_t n);
char *ft_strnstr (const char *str, const char *search, size_t size);
char *ft_strrchr(const char *str, int c);
int	ft_tolower(int c);
int	ft_toupper(int c);

/* ---- PART2 ---- */
char *ft_substr(const char *str, unsigned int start, size_t len);
char *ft_strjoin(char const *str1, char const *str2);
char *ft_strtrim(char *str, char *set);
char **ft_split(char *str, char c);
char *ft_itoa(int nb);
char *ft_strmapi(char const *str, char (*f)(unsigned int, char));
void ft_striteri(char *str, char (*f)(unsigned int, char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *str, int fd);
void ft_putendl_fd(char *str, int fd);
void  ft_putnbr_fd(int nb, int fd);