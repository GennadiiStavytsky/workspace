int mx_popular_int(const int *arr, int size) {
    int result = arr[0];
    int count = 0;
    int bcount = 0;
    int check[size];

    for (int i = 0; i < size; i++)     
        check[i] = 0;
    for (int j = 0; j < size; j++) {  
        if(!check[j]) {
            check[j] = 1;
            for (int i = 1; i < size; i++)
                if(arr[i] == arr[j] && !check[i]) {
                    count++; 
                    check[i] = 1; 
                }
            if(count > bcount) {
                result = arr[j];
                bcount = count;
                count = 0;
            }
        }
    }
    return result;
}


