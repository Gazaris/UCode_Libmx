#include "libmx.h"

char *mx_itoa(int number) {
	int length = 0;
	int tmp = number;
    while (number) {
		number /= 10;
		length++;
	}
    number = tmp;

	char *result = mx_strnew(length);

	if (number == 0)
		return mx_strcpy(result, "0");

	for (int i = 0; i < length; i++) {
		if (tmp < 0) {
			result[length] = '-';
			tmp = -tmp;
		}
		result[i] = (tmp % 10) + '0';
		tmp /= 10;
	}
	mx_str_reverse(result);
	return result;
}
