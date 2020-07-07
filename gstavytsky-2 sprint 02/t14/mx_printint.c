#include <stdio.h>

void mx_printchar(char c);

void mx_printint(int n) {
	if(n < 0) {
	mx_printchar('-');
	n *= -1;
	}
	if(n !=0) {
	mx_printint(n/10);
	mx_printchar('0' +(n % 10));
	}
}


