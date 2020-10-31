#include "libmx.h"

int mx_sqrt(int x) {
	if (x == 0 || x == 1) 
    return x;
	
	int res = 0, i = 1;

	while(res <= x) {
		i++;
		res = i*i;
	}

	i -= 1;
	if(i*i == x)
		return i;
	else 
		return 0;

	return 0;
}
