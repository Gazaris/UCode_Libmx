#include "libmx.h"

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
    if (fd > 0) {
        if (buf_size > 0) {
            char *buf = mx_strnew(buf_size);
            char *str = mx_strnew(buf_size);
            ssize_t type = 1;

            type = read(fd, buf, buf_size);
            mx_strcat(str, buf);
            if (type < 0) {
                free(buf);
                free(str);
                return -1;
            }

            int index = mx_get_char_index(str, delim);
            char *fin_str = mx_strnew(index);
            if (index != -1) {
                mx_strncpy(fin_str, str, index);
                *lineptr = fin_str;
            }
            else {
                *lineptr = str;
                index = -1;
            }
            free(buf);
            free(str);
            return index;
        } 
    }
    return -2;
}

