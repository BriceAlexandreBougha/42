#include "libft.h"

int get_lines(char *str, char c)
{
    int lines = 0;
    int str_len = 0;

    for (; str[str_len]; str_len++);
    for (int i = 0; str[i]; i++)
        if (str[i] == c) {
            for (;str[i + 1] == c; i++);
            lines++;
        }
    if (str[str_len - 1] != c)
        lines++;
    return (lines);
}

int *get_malloc_size(char *str, char c)
{
    int *tab;
    int lines = get_lines(str, c);

    tab = malloc(sizeof(int) * (lines + 1));
    if (!tab)
        return (NULL);
    tab[0] = lines;
    for (int i = 0, count = 0, t = 1; str[i]; i++, count++) {
        if (str[i + 1] == c || str[i + 1] == '\0') {
            for (;str[i + 1] == c; i++);
            tab[t] = count + 1;
            t++;
            count = -1;
        }
    }
    return (tab);
}

char **malloc_split(char *str, char c)
{
    int *tab = get_malloc_size(str, c);
    char **split;

    if (!tab)
        return (NULL);
    split = malloc(sizeof(int *) * tab[0]);
    for (int i = 0; i < tab[0]; i++) {
        split[i] = malloc(sizeof(char) * (tab[i + 1] + 1));
        if (!split[i])
            return (NULL);
    }
    split[tab[0]] = NULL;
    free(tab);
    return split;
}

char **ft_split(char *str, char c)
{
    char **split = malloc_split(str, c);

    if (!split)
        return (NULL);
    for (int i = 0, y = 0, t = 0; str[i]; i++, t++) {
        if (str[i] == c) {
            for (;str[i + 1] == c; i++);
            split[y][t] = '\0';
            y++;
            t = -1;
        } else {
            split[y][t] = str[i];
            if (str[i + 1] == '\0')
                split[y][t + 1] = '\0';
        }
    }
    return (split);
}