#include <stdio.h>

void mx_printchar( char c);

void mx_isos_triangle(unsigned int length, char c) {
	for(unsigned int i = 1; i <= length; i++) {
	for(unsigned int k = 0; k < i; k++){
			mx_printchar(c);
		}
		mx_printchar('\n');
	}
}


