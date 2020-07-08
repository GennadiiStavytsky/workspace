int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);
int mx_selection_sort(char **arr, int size) 
{ 
    int i, j, min_idx;
    int count=0;
    char *temp; 
    for (i = 0; i < size-1; i++) 
    { 
        min_idx = i; 
        for (j = i+1; j < size; j++) {
            if (mx_strlen(arr[j]) < mx_strlen(arr[min_idx])){
            min_idx = j; 
            }
            else if ((mx_strlen(arr[j])==mx_strlen(arr[min_idx])) && ((mx_strcmp(arr[j],arr[min_idx]))==-1)){
            min_idx = j; 
            }  
        } 
        if (mx_strcmp(arr[i],arr[min_idx])!=0){ 
        temp=arr[min_idx];
        arr[min_idx]=arr[i];
        arr[i]=temp;
        count++;
        }
    }
    return count; 
}
