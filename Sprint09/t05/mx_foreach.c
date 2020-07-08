// #include <unistd.h>
void mx_foreach(const int *arr, int size, void(*f)(int)){
    for (int i = 0; i<size; i++){
        f(arr[i]);
    }
}
// void mx_printchar(char c){
//     write(1, &c, 1);
// }
// void mx_printint(int n){
//  int count = 0;
//  int ch = 0;
//  int snul = 1;
//  int buff = 0;
//  if(n == 0){
//      mx_printchar(‘0’);
//      return ;
//  }
//  if(n == -2147483647){
//      mx_printchar(‘-’);
//      mx_printchar(‘2’);
//      n = 147483647;
//  }
//  if(n<0){
//      n = n*-1;
//      ch = 1;
//  }
//  buff = n;
//  while(n !=0 ){
//      n = n/10;
//      count++;
//  }
//  for(int i = 0; i<count -1; i++){
//      snul = snul*10;
//  }
//  if(ch){
//      mx_printchar(‘-’);
//  }
//  for(int i = 0; i<count; i++){
//      mx_printchar(buff / snul + 48);
//      buff = buff % snul;
//      snul = snul / 10;
//  }
// }
// int main(){
//     void (*aopj)(int) = mx_printint;
//     // void mx_printint(int n);
//     int arr[]= {1, 2, 3, 4, 5};
//     mx_foreach(arr, 5, aopj); //prints “12345” to the standart output
// }