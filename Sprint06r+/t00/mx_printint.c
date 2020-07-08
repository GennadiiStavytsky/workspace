void mx_printchar(char c);
void mx_printint(int n){
    int count = 0;
    int ch = 0;
    int s = 1;
    int buff = 0;
    if (n==0){
        mx_printchar('0');
        return;
    }
    if (n == -2147483647){ 
        mx_printchar('-');
        mx_printchar('2');
        n=147483647;
    }
    if (n<0){
        n=n*-1;
        ch = 1;
    }
    buff =n;
    while (n!=0){
        n=n/10;
        count++;
    }
    for(int i = 0; i < count-1; i++){
        s=s*10;
    }
    if(ch){
        mx_printchar('-');
    }
    for (int i=0; i<count; i++){
        mx_printchar(buff/s+48);
        buff = buff % s;
        s=s/10;
    }
}
