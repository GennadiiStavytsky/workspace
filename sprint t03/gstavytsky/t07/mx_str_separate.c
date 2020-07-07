void mx_printchar(char c);
void mx_str_separate(const char *str, char delim) {
		int len = 0;
		while(str[len]) {
			len++;
		}
		for(int i = 0; i <= len; i++) {
			if ( str[i] == delim){
				if(i == 0){mx_printchar('\n');}
				else if(str[i-1]==delim){}
				else{
					mx_printchar('\n');
				}
			}
			else {
			mx_printchar(str[i]);
			}
		}
}

//int main(){
//		char delim = '';
//		char src[] = "game over";
//		mx_str_separate(src, delim);
