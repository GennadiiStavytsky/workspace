#include <unistd.h>

void mx_is_positive(int i) {
	if(i > 0)
	mx_printstr("positive");
	else {
		if(i < 0)
	mx_printstr("negative");
	else
	mx_printstr("zero");
	}
	mx_printstr("\n");
}


//int main() {
//mx_is_positive(0);
//}

