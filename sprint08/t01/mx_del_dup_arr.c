#include "duplicate.h"


t_intarr* mx_del_dup_sarr(t_intarr *src){
    if (!src)
        return NULL;



    int len = src->size;
    int buff[len];
    int count = 0;

    for (int i = 0; i < len; i++)
        buff[i] = 0;
    for (int i = 0; i < len; i++){
        if(buff[i])
            i++;
        for (int j = i+1; j < len; j++)
            if (src->arr[i] == src->arr[j]) {
                buff[j] = 1;
                count++;
            }
    }
    int *res = (int*) malloc(sizeof(char)*(src->size - count));
    res[0] =  src->size - count;
    for (int i = 0, j = 0; i < src->size; i++)
        if(!buff[i]) {
            res[j] = src->arr[i];
            j++;
        }
    t_intarr *jopa = NULL;
    jopa = (t_intarr*)malloc(sizeof(t_intarr));
    jopa->arr = res;
    jopa->size = src->size - count;
    return jopa;
}

int main(){
    t_intarr *jopa = NULL;
    jopa = (t_intarr*)malloc(sizeof(t_intarr));
    int mah[] = {1,2,3,3,4,5,6,7};
    jopa->arr = mah;
    jopa->size = 8;
    t_intarr *one = mx_del_dup_sarr(jopa);
    printf("%d",one->size);


}

