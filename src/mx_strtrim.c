#include "libmx.h"

char *mx_strtrim(const char *str) {
    int len = 0;
    char *new = NULL;

    while (*str == ' ')
        str++;
    len = mx_strlen(str);

    while (str[len - 1] == ' ')
        len--;
    new = mx_strndup(str, len);

    return (char *)new;
}
