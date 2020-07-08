#include <stdbool.h>
//#include <stdio.h>
int mx_comparator(const int *arr, int size, int x, bool (*compare)(int, int)){
    for(int i = 0; i<size; i++){
        if(compare(x,arr[i])){
            return i;
        }
    }
    return -1;
}
// bool equal_nums(int a, int b) {
//     return a == b;
// }
// int main(){
//     int arr[]= {1, 2, 3, 4, 5};
//     bool (*aopj) (int, int) = equal_nums;
//     printf(“%d \n”,mx_comparator(arr, 5, 3, aopj)); //returns 2
//     printf(“%d”,mx_comparator(arr, 5, -1, aopj)); //returns -1
// }