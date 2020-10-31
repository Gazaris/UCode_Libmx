#include "libmx.h"

char* mx_nbr_to_hex(unsigned long nbr) {
    char *arr = mx_strnew(50);
    int i = 0;
    while(nbr != 0) {
        int temp = 0;
        temp = nbr % 16;
        if(temp < 10) {
            arr[i] = temp + 48;
            i++;
        }
        else {
            arr[i] = temp + 87;
            i++;
        }
        nbr = nbr / 16;
    }
    int len = mx_strlen(arr);
    char *result = mx_strnew(len);
    for (int i = 0; i < len; i++)
        result[i] = arr[len - i - 1];
    free(arr);

    return result;
}
