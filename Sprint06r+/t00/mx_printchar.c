#include <unistd.h>
#include <stdio.h>
#include <string.h>
void mx_printchar(char s){
char buff[]={s};
write(1,buff,1);
}

