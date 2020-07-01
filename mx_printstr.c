#include <unistd.h>
int mx_strlen(const char *s);

void mx_printstr(const char *s) {
	int len = 0;
	int i = 0;

	len = mx_strlen(s);
	while(i < len) {
		write(1, &s[i], 1);
		i++;
	}
}


