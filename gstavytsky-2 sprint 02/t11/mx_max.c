#include <stdio.h>

int mx_max(int a, int b, int c) {
	if(a >= b && a >= c)
	return a;
	if(b >=a && b >= c)
	return b;
	if(c >= a && c >= b)
	return c;
	else
	return 0;
}


