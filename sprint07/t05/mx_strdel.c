#include <stdlib.h>

void mx_strdel(char **str){
    free(str);
    str = NULL;
}

// int main(){
//     char **str =malloc(10);
//     mx_strdel(str);

// }

