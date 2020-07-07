//#include <stdio.h>

void mx_ref_pointer(int i, int ******ptr) {
	******ptr = i;
}
//int main() {
//	int c = 5;
//	int a = 4;
//	int *ptr1 = &a;
// 	int **ptr2 = &ptr1;
//	int ***ptr3 = &ptr2;
//	int ****ptr4 = &ptr3;
//	int *****ptr5 = &ptr4;
//	int ******ptr6 = &ptr5;

//	mx_ref_pointer( c , ptr6 );
//printf("%d" , ******ptr6);
//}
