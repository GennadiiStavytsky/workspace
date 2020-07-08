int mx_strcmp(const char *s1, const char *s2);
int mx_linear_search(char **arr, const char *s){
    int count=0;
    while (*arr[count]){
        count++;
        
    }
    for (int i=0; i<count; i++){
        if (mx_strcmp(arr[i],s)==0){
            return i;
        }
    }
    return -1;
}
