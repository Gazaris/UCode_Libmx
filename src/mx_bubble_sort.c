#include "libmx.h"

int mx_bubble_sort(char **arr, int size) {
	if(size < 2)
		return - 1;
	int counter = 0, pr = 1;
	char *temp;
	while(pr == 1) {
		pr = 0;
		for(int i = 0; i < size - 1; i++)
			if(mx_strcmp(arr[i], arr[i + 1]) > 0) {
				pr = 1;
				counter++;
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
	}
	return counter;
}
