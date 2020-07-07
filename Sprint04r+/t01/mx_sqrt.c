//#include <stdio.h>
#include <time.h>

int mx_sqrt(int x) {
    int tmp = x;
    int i;
    for (i = 0;  i <= tmp/2; i++) {
        if (i*i == x) 
            return i;    
    }
    return 0;
}

// int main() {
//     int x =81;
//     int t_s = clock();
//     printf("%d\n", mx_sqrt(x));
//     int t_e = clock();
//     double seconds = (double) (t_e - t_s) / CLOCKS_PER_SEC;
//     printf("time for operation: %f seconds\n", seconds);
// }


