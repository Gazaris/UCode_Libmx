#include "libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int left = 0 ; 
    int right = size - 1; 
    int coun = 0, mid = 0, res = 0;
    while (left <= right) { 
        coun++;
        *count = coun;
        mid = left + (right - left) / 2; 
        res = 1;
        if (mx_strcmp(s, arr[mid]) == 0) res = 0; 
        if (res == 0) return mid; 
        if (mx_strcmp(s, arr[mid]) > 0) left = mid + 1; 
        else right = mid - 1; 
    } 
    *count = 0;
    return -1; 
}
