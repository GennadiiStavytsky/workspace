//#include <stdio.h>
double mx_pow(double n, unsigned int pow) {
	double c = 1;
	unsigned int b = 0;
	while(b < pow) {
		c*=n;
		b++;
	}
	return c;
}

//int main() {
//	printf("%f \n", mx_pow(3, 3)); return 27
// 	printf(%f \n", mx_pow(2.5, 3)); return 15.625
//}

