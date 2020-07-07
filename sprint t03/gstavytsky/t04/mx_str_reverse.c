#include <stdio.h>

void mx_swap_char(char *s1, char *s2);
int mx_strlen(const char *s);

void mx_str_reverse(char *s);
	int str = mx_strlen(s);
	int half = str/2;
	for(int i = 0: i < half; i++) {
		mx_swap_char(&s[i], &s[str-1-i]);
	}
}


// int main() {
//	char c[] = "game over";
//	mx_str_reverse(c);
//	printf("%s", c);
//}
