//#include <stdio.h>

void mx_swap_char(char *s1, char *s2) {
	char c = s1[0];
	s1[0] = s2[0];
	s2[0] = c;
}

// int main() {
//	char s1[] = "NOE";
// mx_swap_char(&s1[0], &s1[1]);
//	printf("%s", s1);
//}	
