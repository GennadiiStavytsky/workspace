void mx_printchar(const char c);

void mx_print_arr(int *arr, int row, int col) {
    for (int i = row-1; i >= 0; i--) {
        int j = 0;
        while (j<col && *(arr+i*col+j)!='\n'){
            mx_printchar(*(arr+i*col+j));
            j++;
        }
        mx_printchar('\n');
    }
}

void mx_fill_pyramid_arr(int *arr, int n, int col) {
    for (int i = 1; i <= 2*n-3; i++)
        *(arr+i) = '_';

    for (int i = 0; i < n; i++)
        *(arr+(i)*col+i) = '/';

    for (int i = 0; i < n-1; i++)
        *(arr+(i)*col+(2*n - 2 - i)) = '\\';

    for (int i = 0; i < n/2; i++)
        *(arr+(i)*col+2*n-1) = '|';

    for (int i = 0; i < n/2; i++) {
        *(arr+(i+n/2)*col+(2*n - 2 - i*2)) = '\\';
        *(arr+(i+n/2)*col+(2*n - 1 - i*2)) = '\n';
    }
}

void mx_pyramid(int n) {
    if (n>1) {
        int row = n;
        int col = 2*n;
        int arr[row][col];
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                arr[i][j] = ' ';
        mx_fill_pyramid_arr(&arr[0][0], n, col);
        mx_print_arr(&arr[0][0], row, col);
    }
}
