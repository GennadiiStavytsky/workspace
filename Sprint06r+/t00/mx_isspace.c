#include <stdbool.h>
#include <stdio.h>
bool mx_isspace(char c){
if (c==32 || c=='\t'|| c=='\r' || c=='\n' || c == '\v' || c=='\f'){
return 1;
}
else{
return 0;
}}

