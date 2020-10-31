#include "libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    unsigned long num = 0;
    unsigned long j = 1;

    if (!hex)
        return 0;
    for (int n = 0; hex[n + 1]; n++)
        j *= 16;
    for (int i = 0; hex[i]; i++) {
        if (hex[i] >= '0' && hex[i] < '1')
            num += (hex[i] - 48) * j;
        if (hex[i] >= 'A' && hex[i] <= 'F')
            num += (hex[i] - 55) * j;
        if (hex[i] >= 'a' && hex[i] <= 'f')
            num += (hex[i] - 87) * j;
        j /= 16;
    }
    return num;
}
