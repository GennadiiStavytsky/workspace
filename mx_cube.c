void mx_printchar(const char c);

void mx_print_cube_arr(int *arr, int row, int col) {
    for (int i = row-1; i >= 0; i--) {
        int j = 0;
        while (j<col && *(arr+i*col+j)!='\n'){
            mx_printchar(*(arr+i*col+j));
            j++;
        }
        mx_printchar('\n');
    }
}

void mx_fill_cube_arr(int *arr, int n, int row, int col) {

    *(arr + n*0 + col*0 + row*0) = '+';
    *(arr+2*n+1) = '+';
    *(arr+(n+1)*col) = '+';
    *(arr+(n+1)*col+2*n+1) = '+';
    *(arr+(n/2+1)*col + 2*n+n/2+2) = '+';
    *(arr+(n+n/2+2)*col + 2*n+n/2+2) = '+';
    *(arr+(n+n/2+2)*col + n/2+1) = '+';

    for (int i = 1; i < 2 * n + 1; i++) {
        *(arr+i) = '-';
        *(arr+(n+1)*col+i) = '-';
        *(arr+(n+n/2+2)*col+i+n/2+1) = '-';
    }
    for (int i = 1; i <=n; i++) {
        *(arr+i*col) = '|';
        *(arr+i*col+2*n+1) = '|';
        *(arr+(i+n/2+1)*col+2*n+n/2+2) = '|';
    }
    for (int i = 1; i < n/2+1; i++) {
        *(arr+i*col+2*n+1+i) = '/';
        *(arr+(i-1)*col+2*n+1+i) = '\n';
        *(arr+(i+n+1)*col+2*n+1+i) = '/';
        *(arr+(i+n+1)*col+i) = '/';
    }
    *(arr+(n/2)*col+2*n+n/2+2) = '\n';
}

void mx_cube(int n) {
    if (n>1) {
        int row = n+n/2+3;
        int col = 2*n+n/2+3;
        int arr[row][col];
        for (int i = row-1; i >= 0; i--)
            for (int j = 0; j < col; j++)
                arr[i][j] = ' ';
        mx_fill_cube_arr(&arr[0][0], n, row, col);
        mx_print_cube_arr(&arr[0][0], row, col);
    }
}
