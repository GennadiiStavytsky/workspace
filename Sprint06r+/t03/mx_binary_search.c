int mx_binary_search(char **arr, int size, const char *s, int *count) 
{       
        int l=0;
        while (l <= size) { 
            int m = l + (size - l-1) / 2; 
            if (arr[m] == s) {
                ++*count;
                return m; 
            }
            if (arr[m] < s) {
                ++*count;
                l = m + 1; 
            }
            else{
                ++*count;
                size = m - 1;
            } 
        }   
    *count = 0;
    return -1; 
}
