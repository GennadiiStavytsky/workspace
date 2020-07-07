void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void mx_sort_arr_int(int *arr, int size) {
    for (int i = 1; i < size; i++)
        for (int j = 0; j < size - i; j++)
            if(arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}


