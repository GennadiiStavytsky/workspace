//#include <stdio.h>
#include <string.h>

const char *mx_strchr(const char *s, int c) {
    // int len = 0;
    // while(s[len]) {
    //     len++;
    for(int len  = 0; s[len]; len++) {
        if(s[len] == c) 
        return s;
    }

return 0;
}

//int main() {
//const char *s[] = {"Here must be some text"};
//int с = 3;
//s = strchr ("is a test", ' ');
//printf("%s", mx_strchr(s, 3));

//}


