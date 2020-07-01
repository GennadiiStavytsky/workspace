void mx_printint(int n);
int mx_atoi(const char *str);
void mx_printchar(char c);

int main(int argc, char *argv[]) {
    if (argc >=2) {
        int sum = 0;
        for (int i=1; i < argc; i++) {
            sum+=mx_atoi(argv[i]);
        }
        mx_printint(sum);
        mx_printchar('\n');
    }
    else return 0;
}


