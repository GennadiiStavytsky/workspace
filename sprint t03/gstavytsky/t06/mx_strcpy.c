//#include <stdio.h>
	char *mx_strcpy(char *dst, const char*src) {
		int len = 0;
		while(src[len]) {
			len++;
		}
		for(int i = 0; i <= len ; i++) {
			dst[i];
		}
		return dst;
	}


//int main () {
//	char dst[] = "";
//	char src[] = "Hello";
//	printf("%s", mx_strcpy(dst , src));
//}


