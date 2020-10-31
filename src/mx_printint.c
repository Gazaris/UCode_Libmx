#include "libmx.h"

void mx_printint(int n) {
	char v[20];
	int i = 0;
	if(n < 0) {
		mx_printchar('-');
		n = -n;
	}

	for( ; n != 0; ) {
		v[i] = n % 10 + 48;
		n /= 10;
		i++;
	}

	for( ; i >= 0; i--)
		mx_printchar(v[i]);
}
