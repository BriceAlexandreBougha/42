#include "libft.h" 
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* ---- PART1 ---- */

void test_atoi(void)
{
    printf("\033[1;34m- ATOI TEST\033[0m\n");
    if (atoi("10") != ft_atoi("10")) printf("  \033[1;31mtest 1: KO\033[0m\n");
    else if (atoi("-10") != ft_atoi("-10")) printf("  \033[1;31mtest 2: KO\033[0m\n");
    else if (atoi("+134") != ft_atoi("+134")) printf("  \033[1;31mtest 3: KO\033[0m\n");
    else if (atoi("    146") != ft_atoi("    146")) printf("  \033[1;31mtest 4: KO\033[0m\n");
    else if (atoi("132   ") != ft_atoi("132   ")) printf("  \033[1;31mtest 5: KO\033[0m\n");
    else if (atoi("    -211") != ft_atoi("    -211")) printf("  \033[1;31mtest 6: KO\033[0m\n");
    else if (atoi("    +15615") != ft_atoi("    +15615")) printf("  \033[1;31mtest 7: KO\033[0m\n");
    else if (atoi("    +15sz615") != ft_atoi("    +15sz615")) printf("  \033[1;31mtest 8: KO\033[0m\n");
    else if (atoi("cbhaibc") != ft_atoi("cbhaibc")) printf("  \033[1;31mtest 9: KO\033[0m\n");
    else if (atoi("-2147483648") != ft_atoi("-2147483648")) printf("  \033[1;31mtest 10: KO\033[0m\n");
    else (printf("  \033[1;32mtest: OK\033[0m\n"));
    printf("\n");
}

void test_calloc(void)
{
    int *p = ft_calloc(5, sizeof(int));

    printf("\033[1;34m- CALLOC TEST\033[0m\n");
    for (int i = 0; i < 5; i++) {
        if (p[0] != 0) {
            printf("  \033[1;31mtest: KO\033[0m\n\n");
            return ;
        }
    }
    printf("  \033[1;32mtest: OK\033[0m\n\n");
}

void test_isalnum(void)
{
    printf("\033[1;34m- ISALNUM TEST\033[0m\n");
    if (ft_isalnum('0') == 0) printf("  \033[1;31mtest 1: KO\033[0m\n");
    else if (ft_isalnum('a') == 0) printf("  \033[1;31mtest 2: KO\033[0m\n");
    else if (ft_isalnum('A') == 0) printf("  \033[1;31mtest 3: KO\033[0m\n");
    else if (ft_isalnum('z') == 0) printf("  \033[1;31mtest 4: KO\033[0m\n");
    else if (ft_isalnum('Z') == 0) printf("  \033[1;31mtest 5: KO\033[0m\n");
    else if (ft_isalnum('9') == 0) printf("  \033[1;31mtest 6: KO\033[0m\n");
    else if (ft_isalnum(' ') != 0) printf("  \033[1;31mtest 7: KO\033[0m\n");
    else if (ft_isalnum('+') != 0) printf("  \033[1;31mtest 8: KO\033[0m\n");
    else if (ft_isalnum('_') != 0) printf("  \033[1;31mtest 9: KO\033[0m\n");
    else if (ft_isalnum('|') != 0) printf("  \033[1;31mtest 10: KO\033[0m\n");
    else (printf("  \033[1;32mtest: OK\033[0m\n"));
    printf("\n");
}

void test_isalpha(void)
{
    printf("\033[1;34m- ISALPHA TEST\033[0m\n");
    if (ft_isalpha('0') != 0) printf("  \033[1;31mtest 1: KO\033[0m\n");
    else if (ft_isalpha('a') == 0) printf("  \033[1;31mtest 2: KO\033[0m\n");
    else if (ft_isalpha('A') == 0) printf("  \033[1;31mtest 3: KO\033[0m\n");
    else if (ft_isalpha('z') == 0) printf("  \033[1;31mtest 4: KO\033[0m\n");
    else if (ft_isalpha('Z') == 0) printf("  \033[1;31mtest 5: KO\033[0m\n");
    else if (ft_isalpha('9') != 0) printf("  \033[1;31mtest 6: KO\033[0m\n");
    else if (ft_isalpha(' ') != 0) printf("  \033[1;31mtest 7: KO\033[0m\n");
    else if (ft_isalpha('+') != 0) printf("  \033[1;31mtest 8: KO\033[0m\n");
    else if (ft_isalpha('_') != 0) printf("  \033[1;31mtest 9: KO\033[0m\n");
    else if (ft_isalpha('|') != 0) printf("  \033[1;31mtest 10: KO\033[0m\n");
    else (printf("  \033[1;32mtest: OK\033[0m\n"));
    printf("\n");
}

void test_isascii(void)
{
    printf("\033[1;34m- ISASCII TEST\033[0m\n");
    if (ft_isascii('0') == 0) printf("  \033[1;31mtest 1: KO\033[0m\n");
    else if (ft_isascii('a') == 0) printf("  \033[1;31mtest 2: KO\033[0m\n");
    else if (ft_isascii('A') == 0) printf("  \033[1;31mtest 3: KO\033[0m\n");
    else if (ft_isascii('z') == 0) printf("  \033[1;31mtest 4: KO\033[0m\n");
    else if (ft_isascii('Z') == 0) printf("  \033[1;31mtest 5: KO\033[0m\n");
    else if (ft_isascii('9') == 0) printf("  \033[1;31mtest 6: KO\033[0m\n");
    else if (ft_isascii(' ') == 0) printf("  \033[1;31mtest 7: KO\033[0m\n");
    else if (ft_isascii('+') == 0) printf("  \033[1;31mtest 8: KO\033[0m\n");
    else if (ft_isascii(-1) != 0) printf("  \033[1;31mtest 9: KO\033[0m\n");
    else if (ft_isascii(199) != 0) printf("  \033[1;31mtest 10: KO\033[0m\n");
    else (printf("  \033[1;32mtest: OK\033[0m\n"));
    printf("\n");
}

void test_isdigit(void)
{
    printf("\033[1;34m- ISDIGIET TEST\033[0m\n");
    if (ft_isdigit('0') == 0) printf("  \033[1;31mtest 1: KO\033[0m\n");
    else if (ft_isdigit('a') != 0) printf("  \033[1;31mtest 2: KO\033[0m\n");
    else if (ft_isdigit('A') != 0) printf("  \033[1;31mtest 3: KO\033[0m\n");
    else if (ft_isdigit('z') != 0) printf("  \033[1;31mtest 4: KO\033[0m\n");
    else if (ft_isdigit('Z') != 0) printf("  \033[1;31mtest 5: KO\033[0m\n");
    else if (ft_isdigit('9') == 0) printf("  \033[1;31mtest 6: KO\033[0m\n");
    else if (ft_isdigit(' ') != 0) printf("  \033[1;31mtest 7: KO\033[0m\n");
    else if (ft_isdigit('+') != 0) printf("  \033[1;31mtest 8: KO\033[0m\n");
    else if (ft_isdigit('_') != 0) printf("  \033[1;31mtest 9: KO\033[0m\n");
    else if (ft_isdigit('|') != 0) printf("  \033[1;31mtest 10: KO\033[0m\n");
    else (printf("  \033[1;32mtest: OK\033[0m\n"));
    printf("\n");
}

void test_isprint(void)
{
    printf("\033[1;34m- ISPRINT TEST\033[0m\n");
    if (ft_isprint('0') == 0) printf("  \033[1;31mtest 1: KO\033[0m\n");
    else if (ft_isprint('a') == 0) printf("  \033[1;31mtest 2: KO\033[0m\n");
    else if (ft_isprint('A') == 0) printf("  \033[1;31mtest 3: KO\033[0m\n");
    else if (ft_isprint('z') == 0) printf("  \033[1;31mtest 4: KO\033[0m\n");
    else if (ft_isprint('Z') == 0) printf("  \033[1;31mtest 5: KO\033[0m\n");
    else if (ft_isprint('9') == 0) printf("  \033[1;31mtest 6: KO\033[0m\n");
    else if (ft_isprint(' ') == 0) printf("  \033[1;31mtest 7: KO\033[0m\n");
    else if (ft_isprint('+') == 0) printf("  \033[1;31mtest 8: KO\033[0m\n");
    else if (ft_isprint(' ' - 1) != 0) printf("  \033[1;31mtest 9: KO\033[0m\n");
    else if (ft_isprint('~' + 1) != 0) printf("  \033[1;31mtest 10: KO\033[0m\n");
    else (printf("  \033[1;32mtest: OK\033[0m\n"));
    printf("\n");
}

void test_memchr(void)
{
    int size = 10;
    int i = 0;
    char *str = malloc(sizeof(char) * size);
    
    for (; i < size; str[i] = i + '0', i++);
    str[i] = '\0';

    printf("\033[1;34m- MEMCHR TEST\033[0m\n"); 
    if (memchr(str, '0', 10) != ft_memchr(str, '0', 10)) printf("  \033[1;31mtest 1: KO\033[0m\n");
    else if (memchr(str, '7', 10) != ft_memchr(str, '7', 10)) printf("  \033[1;31mtest 2: KO\033[0m\n");
    else if (memchr(str, 't', 10) != ft_memchr(str, 't', 10)) printf("  \033[1;31mtest 3: KO\033[0m\n");
    else if (memchr(str, '7', 5) != ft_memchr(str, '7', 5)) printf("  \033[1;31mtest 4: KO\033[0m\n");
    else (printf("  \033[1;32mtest: OK\033[0m\n"));
    printf("\n");
    free(str);
}

void test_memcmp(void)
{
    int size = 10;
    int i = 0;
    char *str = malloc(sizeof(char) * size);
    char *str2 = malloc(sizeof(char) * size);
    
    for (; i < size; str[i] = i + '0', str2[i] = i + '0', i++);
    str[i] = '\0';
    str2[i] = '\0';
    str2[7] = 'A';

    printf("\033[1;34m- MEMCMP TEST\033[0m\n"); 
    if (ft_memcmp(str, str2, 6) != 0) printf("  \033[1;31mtest 1: KO\033[0m\n");
    else if (ft_memcmp(str, str2, 10) == 0) printf("  \033[1;31mtest 2: KO\033[0m\n");
    else if (ft_memcmp(str, str2, 0) != 0) printf("  \033[1;31mtest 3: KO\033[0m\n");
    else (printf("  \033[1;32mtest: OK\033[0m\n"));
    printf("\n");
    free(str);
    free(str2);
}

void test_memmove(void)
{
    int size = 10;
    int i = 0;
    char *str = malloc(sizeof(char) * size);
    char *str2 = malloc(sizeof(char) * size);
    
    for (; i < size; str[i] = i + '0', str2[i] = size - i + '0' - 1, i++);
    str[i] = '\0';
    str2[i] = '\0';

    printf("\033[1;34m- MEMMOVE TEST\033[0m\n"); 
    if (memmove(str, str2, 6) != ft_memmove(str, str2, 6)) printf("  \033[1;31mtest 1: KO\033[0m\n");
    else if (memmove(str, str2, 10) != ft_memmove(str, str2, 10)) printf("  \033[1;31mtest 2: KO\033[0m\n");
    else if (memmove(str, str2, 0) != ft_memmove(str, str2, 0)) printf("  \033[1;31mtest 3: KO\033[0m\n");
    else if (memmove(str, str2, 10) != ft_memmove(str, str2, 15)) printf("  \033[1;31mtest 3: KO\033[0m\n");
    else (printf("  \033[1;32mtest: OK\033[0m\n"));
    printf("\n");
    free(str);
    free(str2);
}

void test_memset(void)
{
    int size = 10;
    int i = 0;
    char *str = malloc(sizeof(char) * size);
    
    for (; i < size; str[i] = i + '0', i++);
    str[i] = '\0';

    printf("\033[1;34m- MEMSET TEST\033[0m\n"); 
    if (memset(str, 't', 6) != ft_memset(str, 't', 6)) printf("  \033[1;31mtest 1: KO\033[0m\n");
    else if (memset(str, 't', 10) != ft_memset(str, 't', 10)) printf("  \033[1;31mtest 2: KO\033[0m\n");
    else if (memset(str, 't', 0) != ft_memset(str, 't', 0)) printf("  \033[1;31mtest 3: KO\033[0m\n");
    else if (memset(str, 't', 10) != ft_memset(str, 't', 15)) printf("  \033[1;31mtest 3: KO\033[0m\n");
    else (printf("  \033[1;32mtest: OK\033[0m\n"));
    printf("\n");
    free(str);
}

void test_strchr(void)
{
    int size = 10;
    int i = 0;
    char *str = malloc(sizeof(char) * size);
    
    for (; i < size; str[i] = i + '0', i++);
    str[i] = '\0';

    printf("\033[1;34m- STRCHR TEST\033[0m\n"); 
    if (strchr(str, '0') != ft_strchr(str, '0')) printf("  \033[1;31mtest 1: KO\033[0m\n");
    else if (strchr(str, '7') != ft_strchr(str, '7')) printf("  \033[1;31mtest 2: KO\033[0m\n");
    else if (strchr(str, 't') != ft_strchr(str, 't')) printf("  \033[1;31mtest 3: KO\033[0m\n");
    else (printf("  \033[1;32mtest: OK\033[0m\n"));
    printf("\n");
    free(str);
}

void test_strdup(void)
{
    int size = 10;
    int i = 0;
    char *str = malloc(sizeof(char) * size);
    
    for (; i < size; str[i] = i + '0', i++);
    str[i] = '\0';

    printf("\033[1;34m- STRDUP TEST\033[0m\n"); 
    if (strcmp(strdup(str), ft_strdup(str)) != 0) printf("  \033[1;31mtest 1: KO\033[0m\n");
    else (printf("  \033[1;32mtest: OK\033[0m\n"));
    printf("\n");
    free(str);
}

void test_strlcat(void)
{
    int size = 10;
    int i = 0;
    char *str = malloc(sizeof(char) * size * 2);
    char *str2 = malloc(sizeof(char) * (size / 2));
    int count = 0;
    
    for (; i < size; str[i] = i + '0', i++);
    for (i = 0; i < size / 2; str2[i] = i + '0', i++);
    str[size] = '\0';
    str2[size / 2] = '\0';

    printf("\033[1;34m- STRLCAT TEST\033[0m\n");
    ft_strlcat(str, str2, 2);
    if (strcmp(str, "012345678901") != 0) printf("  \033[1;31mtest 1: KO\033[0m\n");
    else count++;
    ft_strlcat(str, str2, 10);
    if (strcmp(str, "01234567890101234") != 0) printf("  \033[1;31mtest 2: KO\033[0m\n");
    else count++;
    if (count == 2) printf("  \033[1;32mtest: OK\033[0m\n");
    printf("\n");
    free(str);
    free(str2);
}

void test_strlcpy(void)
{
    int size = 10;
    int i = 0;
    char *str = malloc(sizeof(char) * size);
    char *str2 = malloc(sizeof(char) * size);
    int count = 0;
    
    for (; i < size; str[i] = i + '0', i++);
    for (i = 0; i < size; str2[i] = size - i - 1 + '0', i++);
    str[size] = '\0';
    str2[size] = '\0';

    printf("\033[1;34m- STRLCPY TEST\033[0m\n");
    ft_strlcpy(str, str2, 11);
    if (strcmp(str, "9876543210") != 0) printf("  \033[1;31mtest 1: KO\033[0m\n");
    else count++;
    for (; i < size; str[i] = i + '0', i++);
    ft_strlcpy(str, str2, 2);
    if (strcmp(str, "98") != 0) printf("  \033[1;31mtest 2: KO\033[0m\n");
    else count++;
    if (count == 2) printf("  \033[1;32mtest: OK\033[0m\n");
    printf("\n");
    free(str);
    free(str2);
}

void test_strlen(void)
{
    int size = 10;
    int i = 0;
    char *str = malloc(sizeof(char) * size);
    
    for (; i < size; str[i] = i + '0', i++);
    str[size] = '\0';

    printf("\033[1;34m- STRLEN TEST\033[0m\n");
    if (ft_strlen(str) != size) printf("  \033[1;31mtest 1: KO\033[0m\n");
    else (printf("  \033[1;32mtest: OK\033[0m\n"));
    printf("\n");
    free(str);
}

void test_strncmp(void)
{
    int size = 10;
    int i = 0;
    char *str = malloc(sizeof(char) * size);
    char *str2 = malloc(sizeof(char) * size);
    
    for (; i < size; str[i] = i + '0', str2[i] = i + '0', i++);
    str[i] = '\0';
    str2[i] = '\0';
    str2[7] = 'A';

    printf("\033[1;34m- STRNCMP TEST\033[0m\n"); 
    if (ft_strncmp(str, str2, 6) != 0) printf("  \033[1;31mtest 1: KO\033[0m\n");
    else if (ft_strncmp(str, str2, 10) == 0) printf("  \033[1;31mtest 2: KO\033[0m\n");
    else if (ft_strncmp(str, str2, 0) != 0) printf("  \033[1;31mtest 3: KO\033[0m\n");
    else (printf("  \033[1;32mtest: OK\033[0m\n"));
    printf("\n");
    free(str);
    free(str2);
}

void test_strnstr(void)
{
    int size = 10;
    int i = 0;
    char *str = malloc(sizeof(char) * size * 2);
    char *str2 = malloc(sizeof(char) * (size / 2));
    int count = 0;
    
    for (; i < size; str[i] = i + '0', i++);
    for (i = 0; i < size / 2; str2[i] = i + 2 + '0', i++);
    str[size] = '\0';
    str2[size / 2] = '\0';

    printf("\033[1;34m- STRNSTR TEST\033[0m\n");
    str = ft_strnstr(str, str2, 2);
    if (strcmp(str, "23456789") != 0) printf("  \033[1;31mtest 1: KO\033[0m\n");
    else count++;
    if (strcmp(ft_strnstr(str, str2, 10), "23456789") != 0) printf("  \033[1;31mtest 2: KO\033[0m\n");
    else count++;
    if (strcmp(ft_strnstr(str, "9", 10), "9") != 0) printf("  \033[1;31mtest 3: KO\033[0m\n");
    else count++;
    if (count == 3) printf("  \033[1;32mtest: OK\033[0m\n");
    printf("\n");
    free(str2);
}

void test_strrchr(void)
{
    int size = 10;
    int i = 0;
    char *str = malloc(sizeof(char) * size);
    
    for (; i < size; str[i] = i + '0', i++);
    str[i] = '\0';

    printf("\033[1;34m- STRRCHR TEST\033[0m\n");
    if (strrchr(str, '0') != ft_strrchr(str, '0')) printf("  \033[1;31mtest 1: KO\033[0m\n");
    else if (strrchr(str, '7') != ft_strrchr(str, '7')) printf("  \033[1;31mtest 2: KO\033[0m\n");
    else if (strrchr(str, 't') != ft_strrchr(str, 't')) printf("  \033[1;31mtest 3: KO\033[0m\n");
    else (printf("  \033[1;32mtest: OK\033[0m\n"));
    printf("\n");
    free(str);
}

void test_tolower(void)
{
    printf("\033[1;34m- TOLOWER TEST\033[0m\n");
    if (ft_tolower('0') != '0') printf("  \033[1;31mtest 1: KO\033[0m\n");
    else if (ft_tolower('a') != 'a') printf("  \033[1;31mtest 2: KO\033[0m\n");
    else if (ft_tolower('A') != 'a') printf("  \033[1;31mtest 3: KO\033[0m\n");
    else if (ft_tolower('z') != 'z') printf("  \033[1;31mtest 4: KO\033[0m\n");
    else if (ft_tolower('Z') != 'z') printf("  \033[1;31mtest 5: KO\033[0m\n");
    else if (ft_tolower('9') != '9') printf("  \033[1;31mtest 6: KO\033[0m\n");
    else if (ft_tolower(' ') != ' ') printf("  \033[1;31mtest 7: KO\033[0m\n");
    else if (ft_tolower('+') != '+') printf("  \033[1;31mtest 8: KO\033[0m\n");
    else (printf("  \033[1;32mtest: OK\033[0m\n"));
    printf("\n");
}

void test_toupper(void)
{
    printf("\033[1;34m- TOUPPER TEST\033[0m\n");
    if (ft_toupper('0') != '0') printf("  \033[1;31mtest 1: KO\033[0m\n");
    else if (ft_toupper('a') != 'A') printf("  \033[1;31mtest 2: KO\033[0m\n");
    else if (ft_toupper('A') != 'A') printf("  \033[1;31mtest 3: KO\033[0m\n");
    else if (ft_toupper('z') != 'Z') printf("  \033[1;31mtest 4: KO\033[0m\n");
    else if (ft_toupper('Z') != 'Z') printf("  \033[1;31mtest 5: KO\033[0m\n");
    else if (ft_toupper('9') != '9') printf("  \033[1;31mtest 6: KO\033[0m\n");
    else if (ft_toupper(' ') != ' ') printf("  \033[1;31mtest 7: KO\033[0m\n");
    else if (ft_toupper('+') != '+') printf("  \033[1;31mtest 8: KO\033[0m\n");
    else (printf("  \033[1;32mtest: OK\033[0m\n"));
    printf("\n");
}

/* ---- PART2 ---- */

void test_substr(void)
{
    int size = 10;
    int i = 0;
    char *str = malloc(sizeof(char) * size);
    
    for (; i < size; str[i] = i + '0', i++);
    str[i] = '\0';
    printf("\033[1;34m- SUBSTR TEST\033[0m\n");
    if (strcmp(ft_substr(str, 0, 16), "0123456789") != 0) printf("  \033[1;31mtest 1: KO\033[0m\n");
    if (strcmp(ft_substr(str, 2, 4), "2345") != 0) printf("  \033[1;31mtest 2: KO\033[0m\n");
    else (printf("  \033[1;32mtest: OK\033[0m\n"));
    printf("\n");
    free(str);
}

void test_strjoin(void)
{
    int size = 10;
    int i = 0;
    char *str = malloc(sizeof(char) * size);
    char *str2 = malloc(sizeof(char) * size);
    
    for (; i < size; str[i] = i + '0', i++);
    str[i] = '\0';
    for (i = 0; i < size; str2[i] = i + '0', i++);
    str2[i] = '\0';

    printf("\033[1;34m- STRJOIN TEST\033[0m\n");
    if (strcmp(ft_strjoin(str, str2), "01234567890123456789") != 0) printf("  \033[1;31mtest 1: KO\033[0m\n");
    else (printf("  \033[1;32mtest: OK\033[0m\n"));
    printf("\n");
    free(str);
}

void test_strtrim(void)
{
    int size = 10;
    int i = 0;
    char *str = malloc(sizeof(char) * size);
    
    for (; i < size; str[i] = i + '0', i++);
    str[i] = '\0';
    str[i - 2] = '0';
    str[i - 1] = '1';

    printf("\033[1;34m- STRTRIM TEST\033[0m\n");
    if (strcmp(ft_strtrim(str, "23"), "0123456701") != 0) printf("  \033[1;31mtest 1: KO\033[0m\n");
    else if (strcmp(ft_strtrim(str, "AB"), "0123456701") != 0) printf("  \033[1;31mtest 2: KO\033[0m\n");
    else if (strcmp(ft_strtrim(str, "01"), "234567") != 0) printf("  \033[1;31mtest 3: KO\033[0m\n");
    else (printf("  \033[1;32mtest: OK\033[0m\n"));
    printf("\n");
    free(str);
}

void test_split(void)
{
    char **strs = ft_split("12c3cccc12cc1234c1", 'c');
    int lines = 0;

    for (; strs[lines]; lines++);
    printf("\033[1;34m- SPLIT TEST\033[0m\n");
    if (strcmp(strs[0], "12") != 0
        || strcmp(strs[1], "3") != 0
        || strcmp(strs[2], "12") != 0
        || strcmp(strs[3], "1234") != 0
        || strcmp(strs[4], "1") != 0) printf("  \033[1;31mtest 1: KO\033[0m\n");
    else if (lines != 5) printf("  \033[1;31mtest 2: KO\033[0m\n");
    else (printf("  \033[1;32mtest: OK\033[0m\n"));
    printf("\n");
    free(strs);
}

void test_itoa(void)
{
    printf("\033[1;34m- ITOA TEST\033[0m\n");
    if (strcmp(ft_itoa(0), "0") != 0) printf("  \033[1;31mtest 1: KO\033[0m\n");
    else if (strcmp(ft_itoa(-156), "-156") != 0) printf("  \033[1;31mtest 2: KO\033[0m\n");
    else if (strcmp(ft_itoa(156), "156") != 0) printf("  \033[1;31mtest 3: KO\033[0m\n");
    else if (strcmp(ft_itoa(1), "1") != 0) printf("  \033[1;31mtest 4: KO\033[0m\n");
    else if (strcmp(ft_itoa(-1), "-1") != 0) printf("  \033[1;31mtest 5: KO\033[0m\n");
    else (printf("  \033[1;32mtest: OK\033[0m\n"));
    printf("\n");
}

char test_f(unsigned int nb, char *c)
{
    return (*c += nb);
}

void test_strmapi(void)
{
    printf("\033[1;34m- STRMAPI PAS TESTABLE\n  (MANQUE LE PARAM INT DANS LA FONCTION F)\033[0m\n");
    // if () printf("  \033[1;31mtest 1: KO\033[0m\n");
    // else (printf("  \033[1;32mtest: OK\033[0m\n"));
    printf("\n");
}

void test_striteri(void)
{
    char *str = malloc(sizeof(char) * 11);

    for (int i = 0; i < 10; str[i] = '0', i++);
    str[10] = '\0';
    ft_striteri(str, test_f);
    printf("\033[1;34m- STRITERI TEST\033[0m\n");
    if (strcmp(str, "0123456789") != 0) printf("  \033[1;31mtest 1: KO\033[0m\n");
    else (printf("  \033[1;32mtest: OK\033[0m\n"));
    printf("\n");
}

void test_putchar_fd(void)
{
    printf("\033[1;34m- PUTCHAR_FD TEST\033[0m\n");
    ft_putchar_fd('A', 1);
    printf("\033[1;36m Printed, Expected: |\033[0mA\033[1;36m|\033[0m\n");

}

void test_putstr_fd(void)
{
    printf("\033[1;34m- PUTSTR_FD TEST\033[0m\n");
    ft_putstr_fd("Azertyuiop", 1);
    printf("\033[1;36m Printed, Expected: |\033[0mAzertyuiop\033[1;36m|\033[0m\n");

}

void test_putendl_fd(void)
{
    printf("\033[1;34m- PUTENDL_FD TEST\033[0m\n");

    ft_putendl_fd("Azertyuiop", 1);
    printf("\033[1;36m Printed, Expected: |\033[0mAzertyuiop(\\n)\033[1;36m|\033[0m\n");

}

void test_putnbr_fd(void)
{
    printf("\033[1;34m- PUTNBR_FD TEST\033[0m\n");

    ft_putnbr_fd(-2147483648, 1);
    printf("\033[1;36m Printed, Expected: |\033[0m-2147483648\033[1;36m|\033[0m\n");

    ft_putnbr_fd(-156, 1);
    printf("\033[1;36m Printed, Expected: |\033[0m-156\033[1;36m|\033[0m\n");

    ft_putnbr_fd(-1, 1);
    printf("\033[1;36m Printed, Expected: |\033[0m-1\033[1;36m|\033[0m\n");

    ft_putnbr_fd(0, 1);
    printf("\033[1;36m Printed, Expected: |\033[0m0\033[1;36m|\033[0m\n");

    ft_putnbr_fd(1, 1);
    printf("\033[1;36m Printed, Expected: |\033[0m1\033[1;36m|\033[0m\n");

    ft_putnbr_fd(156, 1);
    printf("\033[1;36m Printed, Expected: |\033[0m156\033[1;36m|\033[0m\n");

    ft_putnbr_fd(2147483647, 1);
    printf("\033[1;36m Printed, Expected: |\033[0m2147483647\033[1;36m|\033[0m\n");

}

int main(void)
{
    /* ---- PART1 ---- */
    printf("\033[35m   |PART 1|\033[0m\n\n");
    test_atoi();
    test_calloc();
    test_isalnum();
    test_isalpha();
    test_isascii();
    test_isdigit();
    test_isprint();
    test_memchr();
    test_memcmp();
    test_memmove();
    test_memset();
    test_strchr();
    test_strdup();
    test_strlcat();
    test_strlcpy();
    test_strlen();
    test_strncmp();
    test_strnstr();
    test_strrchr();
    test_tolower();
    test_toupper();

    /* ---- PART2 ---- */
    printf("\033[35m   |PART 2|\033[0m\n\n");
    test_substr();
    test_strjoin();
    test_strtrim();
    test_split();
    test_itoa();
    test_strmapi();
    test_striteri();
    test_putchar_fd();
    test_putstr_fd();
    test_putendl_fd();
    test_putnbr_fd();
}