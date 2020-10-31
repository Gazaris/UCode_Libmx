#include <stdbool.h>

bool mx_isalpha(int);

bool mx_isalpha(int c)
{
	bool a = false;
	if((c >= 65 && c <= 90 ) || (c >= 97 && c <= 122)) { a = true; }
	else { a = false; }
	return a; 
}
