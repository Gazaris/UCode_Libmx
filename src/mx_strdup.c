#include "libmx.h"

char *mx_strdup(const char *str) {
    if (str == NULL) return NULL;
    char *rv = mx_strnew(mx_strlen(str));
    return mx_strcpy(rv, str);
}
