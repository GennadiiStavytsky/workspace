void mx_printchar(char c); 
void mx_printstr(const char *s);
char * mx_strchr(const char *s, int c);
int mx_strlen(const char *s);

int main(int argc, char *argv[]) {
    if (argc >=1) {
        char *str = argv[0];
        while (str) {
            if (mx_strchr(&str[1],'/')==0) {
                mx_printstr(&str[1]);
                mx_printchar('\n');
                break;
            }
            else {
                str = mx_strchr(&str[1], '/');
            }
        }
    }
    else {
        return 0;
    }
}


