#include <stdio.h>

int mx_max(int a, int b, int c) {
	if(((a <= b) && (b <= c)) || ((a >= b) && (a <=c)))
	return b;
	if(((b <= a) && (a >= c)) || ((a >= b) && (a <+c)))
	return a;
	else
	return c;
}


