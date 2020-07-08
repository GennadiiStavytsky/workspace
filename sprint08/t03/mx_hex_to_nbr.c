#include "hex_to_nbr.h"

unsigned long mx_hex_to_nbr(const char *hex){
    int len = 0;
    unsigned long dec_val = 0, base = 1;
    while (hex[len]!='\0'){
        len++;
    }      
    for (int i=len-1; i>=0; i--) {    
        if (mx_isdigit(hex[i])) { //hex[i]>='0' && hex[i]<='9'
            dec_val += (hex[i] - 48)*base; 
            base *= 16; 
        } 
        else if (mx_isupper(hex[i])) { //hex[i]>='A' && hex[i]<='F'
            if(hex[i]>='A' && hex[i]<='F'){
                dec_val += (hex[i] - 55)*base; 
                base *= 16;
            }
            else{
                return 0;
            }
            
        }
        else if (mx_islower(hex[i])) { //hex[i]>='a' && hex[i]<='f'
            if(hex[i]>='a' && hex[i]<='f'){
                dec_val += (hex[i] - 87)*base; 
                base *= 16;
            }
            else{
                return 0;
            }
            
        }
        else{
            return 0;
        } 
    } 
      
    return dec_val; 
} 

// int main(){
//     printf("%lu\n",mx_hex_to_nbr("C4")); //returns 196
//     printf("%lu\n",mx_hex_to_nbr("FADE")); //returns 64222
//     printf("%lu\n",mx_hex_to_nbr("ffffffffffff")); //returns 281474976710655
//     // system("leaks -q a.out");
// }

