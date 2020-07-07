

void mx_printchar(char c);
void mx_printint (int n);
void mx_printstr(const char *s);
int mx_strlen(const char *s);

int main (int argc, char *argv[]) {
    if (argc >= 1) {
        int count = 0;
        for (int i = 0; i < argc; i++) {
            if (i == 0) {
                mx_printstr (argv[0]);
                mx_printchar ('\n');
            }
            count++;
        }
        mx_printint(count);
        mx_printchar('\n');
    }
    return 0;
}



